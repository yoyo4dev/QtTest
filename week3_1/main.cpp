#include <QApplication>
#include "mainwindow.h"
#include "newwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    NewWindow n;

    QObject::connect(&w, &MainWindow::openNewWindow, &n, &NewWindow::show);
    QObject::connect(&n, &NewWindow::openMainWindow, &w, &MainWindow::show);

    w.show();
    return a.exec();
}
