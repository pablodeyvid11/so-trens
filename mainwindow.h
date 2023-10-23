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
    void on_slider_trem1_valueChanged(int value); // altera a velocidade do trem 1

    void on_slider_trem2_valueChanged(int value); // altera a velocidade do trem 2

    void on_slider_trem3_valueChanged(int value); // altera a velocidade do trem 3

    void on_slider_trem4_valueChanged(int value); // altera a velocidade do trem 4

    void on_slider_trem5_valueChanged(int value); // altera a velocidade do trem 5

private:
    Ui::MainWindow *ui;

    // Cria os objetos Trem
    Trem *trains[5];

    // Cria o objeto semáforos
    Semaforo *semaforo;
};
#endif  // MAINWINDOW_H
