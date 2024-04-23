#include "soundvisualiser.h"

#include <QApplication>
#include <QAudioDevice>
#include <QMediaDevices>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const QAudioDevice inputDevice = QMediaDevices::defaultAudioInput();
    if (inputDevice.isNull()){
        QMessageBox::warning(nullptr, "audio", "There is no audio input device available.");
        reuturn -1;
    }

    soundVisualiser w(inputDevice);
    w.resize(800, 600);
    w.show();
    return a.exec();
}
