#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QRegularExpressionValidator>
#include <conjuntoaleatorio.h>
#include <QMessageBox>


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
    void on_pushButton_gerar_clicked();

    void on_pushButton_VERIFICAR_clicked();

private:
    Ui::MainWindow *ui;
    PMPFV::conjuntoAleatorio *vetor;
};
#endif // MAINWINDOW_H
