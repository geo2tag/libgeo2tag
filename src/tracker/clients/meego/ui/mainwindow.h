#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MeegoClient.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    MeegoClient m_client;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_auth_button_pressed();

    void on_startstopButton_pressed();
    void on_authentificated();
    void on_error(QString error);
    void on_nameEdit_textChanged(QString name );

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
