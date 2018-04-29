#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QAction>

class NewWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit NewWindow(QWidget *parent = 0);

    void closAndOpenMain();

signals:
    void openMainWindow();

public slots:

private:
    QToolBar *toolBar;
    QAction *mainAction;
};

#endif // NEWWINDOW_H
