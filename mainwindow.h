#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>

#include "semaforo.h"
#include "trem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateInterface(int trainId, int x, int y); // Atualiza a interface visual com a nova posição dos trens
    void startTrains(); // Inicia o andamento dos trens na malha ferroviária

private slots:
    void onSliderTrainValueChanged(int trainId, int value); // Altera a velocidade do trem

private:
    Ui::MainWindow *ui;

    // Cria os objetos Trem
    Trem *trains[5];

    // Cria o objeto semáforos
    Semaforo *semaforo;
};
#endif  // MAINWINDOW_H
