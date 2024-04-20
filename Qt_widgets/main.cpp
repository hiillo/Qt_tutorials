#include "textfinder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextFinder window;
    window.show();
    return a.exec();
}
