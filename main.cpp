#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //w.setWindowTitle(codec->toUnicode("���İ�ť"));

    MainWindow w;
    w.show();

    return a.exec();
}
