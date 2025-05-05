  #include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText(ui->lineEdit->text()); // nastavenie textu
    ui->pushButton->move(ui->pushButton->x(), ui->pushButton->y() + 5);
    ui->listWidget->addItem(ui->lineEdit->text()); // pridanie polozky do zoznamu
    ui->lineEdit->setText("");
    qDebug() << "test"; // vypis do konzoly
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox* msg = new QMessageBox; // vytvorenie objektu QMessageBox
    msg->setWindowTitle("Oznam");
    if (ui->listWidget->currentRow() == -1){ // kontrola ci je nieco zvolene
        msg->setText("nie je nic zvolene");
    } else {
        QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete it; // vymazanie prvku zo zoznamu
        msg->setText("vymazane");
    }
    msg->show();
}


void MainWindow::on_pushButton_3_clicked()
{

}

