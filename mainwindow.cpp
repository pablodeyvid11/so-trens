#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    semaforo = new Semaforo();

    trains[0] = new Trem(1, 380, 60, semaforo);
    trains[1] = new Trem(2, 660, 60, semaforo);
    trains[2] = new Trem(3, 240, 200, semaforo);
    trains[3] = new Trem(4, 520, 200, semaforo);
    trains[4] = new Trem(5, 790, 200, semaforo);

    for(int i = 0; i < 5; i++) {
        connect(trains[i], SIGNAL(updateGUI(int,int,int)), this, SLOT(updateInterface(int,int,int)));
    }

    startTrains();
}

MainWindow::~MainWindow() {
    delete ui;
    delete semaforo;
}

void MainWindow::updateInterface(int id, int x, int y) {
    switch (id) {
    case 1:
        ui->trem_1->setGeometry(x, y, 10, 10);
        break;
    case 2:
        ui->trem_2->setGeometry(x, y, 10, 10);
        break;
    case 3:
        ui->trem_3->setGeometry(x, y, 10, 10);
        break;
    case 4:
        ui->trem_4->setGeometry(x, y, 10, 10);
        break;
    case 5:
        ui->trem_5->setGeometry(x, y, 10, 10);
        break;
    default:
        break;
    }
}

void MainWindow::startTrains() {
    for(int i = 0; i < 5; i++) {
        trains[i]->start();
    }
}

/*Altera a velocidade do trem 1*/
void MainWindow::on_slider_trem1_valueChanged(int value) {
    trains[0]->setVelocidade(value);
}

/*Altera a velocidade do trem 2*/
void MainWindow::on_slider_trem2_valueChanged(int value) {
    trains[1]->setVelocidade(value);
}

/*Altera a velocidade do trem 3*/
void MainWindow::on_slider_trem3_valueChanged(int value) {
    trains[2]->setVelocidade(value);
}

/*Altera a velocidade do trem 4*/
void MainWindow::on_slider_trem4_valueChanged(int value) {
    trains[3]->setVelocidade(value);
}

/*Altera a velocidade do trem 5*/
void MainWindow::on_slider_trem5_valueChanged(int value) {
    trains[4]->setVelocidade(value);
}

