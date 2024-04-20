#include "soundvisualiser.h"
#include "./ui_soundvisualiser.h"

soundVisualiser::soundVisualiser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::soundVisualiser)
{
    ui->setupUi(this);
}

soundVisualiser::~soundVisualiser()
{
    delete ui;
}
