#include "soundvisualiser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    soundVisualiser w;
    w.show();
    return a.exec();
}
