#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    semaforo = new Semaforo();

    trains[0] = new Trem(1, 390, 60, semaforo);
    trains[1] = new Trem(2, 660, 60, semaforo);
    trains[2] = new Trem(3, 110, 230, semaforo);
    trains[3] = new Trem(4, 350, 230, semaforo);
    trains[4] = new Trem(5, 590, 230, semaforo);

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
        ui->trem_1->setGeometry(x, y, 20, 20);
        break;
    case 2:
        ui->trem_2->setGeometry(x, y, 20, 20);
        break;
    case 3:
        ui->trem_3->setGeometry(x, y, 20, 20);
        break;
    case 4:
        ui->trem_4->setGeometry(x, y, 20, 20);
        break;
    case 5:
        ui->trem_5->setGeometry(x, y, 20, 20);
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

void MainWindow::onSliderTrainValueChanged(int trainId, int value) {
    if(trainId < 1 || trainId >5) return;

    trains[trainId + 1]->setVelocidade(value);
}
