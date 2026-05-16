//#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel label("Privet vsem!");
    label.resize(400, 200);
    label.setAlignment(Qt::AlignCenter);
    label.show();

    //MainWindow w;
    //w.show();

    return a.exec();
}
