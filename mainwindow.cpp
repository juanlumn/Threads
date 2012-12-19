#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
#include <QProgressDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QProgressDialog dialogo("TRabajando!","Parar",0,100,NULL);
    dialogo.setWindowTitle("Progreso");
    dialogo.setModal(true);
    dialogo.show();
    for (int i=0;i<100 && dialogo.wasCanceled()==false;i++){
        ui->label->setText("vuelta "+QString::number(i));
        ui->label->repaint();
        dialogo.setValue(i);
        for(int j=0;j<100000000;j++){
            double b = cos(j)*tan(j);
        }
        qApp->processEvents();
    }
}
