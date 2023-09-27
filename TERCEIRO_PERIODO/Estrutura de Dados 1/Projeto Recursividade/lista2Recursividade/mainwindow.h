#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonEx1Interativo_clicked();

    void on_pushButtonEx1Recursivo_clicked();

    void on_pushButtonEx2Interativo_clicked();

    void on_pushButtonEx2Recursivo_clicked();

    void on_pushButtonEx3Interativo_clicked();

    void on_pushButtonEx3Recursivo_clicked();

    void on_pushButtonEx4Interativo_clicked();

    void on_pushButtonEx4Recursivo_clicked();

    void on_pushButtonEx5Interativo_clicked();

    void on_pushButtonEx5Recursivo_clicked();

    void on_pushButtonEx6Interativo_clicked();

    void on_pushButtonEx6Recursivo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
