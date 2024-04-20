#include "textfinder.h"
#include "./ui_textfinder.h"
#include <QMouseEvent>
#include <QFile>
#include <QTextStream>
#include <QGraphicsDropShadowEffect>

TextFinder::TextFinder(QWidget *parent)
    : QWidget(parent, Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();

    setAttribute(Qt::WA_TranslucentBackground,true);

    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect();
    effect->setXOffset(0.0);
    effect->setYOffset(0.0);
    effect->setColor(Qt::black);
    effect->setBlurRadius(6);

    ui->container->setGraphicsEffect(effect);
    // ui->container->setStyleSheet("border: 1px solid red");


    QAction *quitAction = new QAction(tr("E&xit"), this);
    quitAction->setShortcut(tr("Ctrl+Q"));
    connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);
    addAction(quitAction);

    setToolTip(tr("Drag the clock with the left mouse button.\n"
                  "Use the right mouse button to open a context menu."));
    setWindowTitle(tr("Testing!"));
}

TextFinder::~TextFinder()
{
    delete ui;
}

void TextFinder::loadTextFile()
{
    QFile inputFile (":/input.txt");
    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();
    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void TextFinder::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void TextFinder::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPosition().toPoint() - dragPosition);
        event->accept();
    }
}

QSize TextFinder::sizeHint() const
{
    return QSize(200, 200);
}


