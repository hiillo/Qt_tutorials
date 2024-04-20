#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TextFinder;
}
QT_END_NAMESPACE

class TextFinder : public QWidget
{
    Q_OBJECT

public:
    TextFinder(QWidget *parent = nullptr);
    ~TextFinder();
    QSize sizeHint() const override; // don't have to resize the widget explicitly.

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void on_findButton_clicked();
private:
    Ui::TextFinder *ui;
    void loadTextFile();
    QPoint dragPosition;
};
#endif // TEXTFINDER_H
