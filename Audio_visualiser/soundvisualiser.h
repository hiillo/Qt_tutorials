#ifndef SOUNDVISUALISER_H
#define SOUNDVISUALISER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class soundVisualiser;
}
QT_END_NAMESPACE

class soundVisualiser : public QWidget
{
    Q_OBJECT

public:
    soundVisualiser(QWidget *parent = nullptr);
    ~soundVisualiser();

private:
    Ui::soundVisualiser *ui;
};
#endif // SOUNDVISUALISER_H
