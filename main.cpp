#include "game.h"
#include "home.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QStringList list;
    list << "Starjedi";
    int fontID(-1);
    bool fontWarningShown(false);
    for (QStringList::const_iterator constIterator = list.constBegin(); constIterator != list.constEnd(); ++constIterator) {
        QFile res(":/fonts/" + *constIterator);
        if (res.open(QIODevice::ReadOnly) == false) {
            if (fontWarningShown == false) {
                QMessageBox::warning(0, "Application", (QString)"Impossible d'ouvrir la police " + QChar(0x00AB) + " Star Jedi " + QChar(0x00BB) + ".");
                fontWarningShown = true;
            }
        } else {
            fontID = QFontDatabase::addApplicationFontFromData(res.readAll());
            if (fontID == -1 && fontWarningShown == false) {
                QMessageBox::warning(0, "Application", (QString)"Impossible d'ouvrir la police " + QChar(0x00AB) + " Star Jedi " + QChar(0x00BB) + ".");
                fontWarningShown = true;
            }
        }
    }

    Home home;
    home.show();
    return a.exec();
}
