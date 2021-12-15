#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "qxtglobalshortcut.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void test1();
    void test2();
    void delete1();

private:
    Ui::MainWindow *ui;
    QxtGlobalShortcut* testsc1 = nullptr;
    QxtGlobalShortcut* testsc2 = nullptr;
};
#endif // MAINWINDOW_H
