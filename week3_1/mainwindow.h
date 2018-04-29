#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

    void closeAndOpenNew();

signals:
    void openNewWindow();

public slots:

private:
    QToolBar *toolBar;
    QAction *newAction;
};

#endif // MAINWINDOW_H
