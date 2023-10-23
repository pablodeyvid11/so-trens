#ifndef TREM_H
#define TREM_H

#include <QThread>
#include "semaforo.h"

class Trem : public QThread {
    Q_OBJECT

public:
    Trem(int ID, int x, int y, Semaforo *&semaforos); // Construtor
    void run() override;                             // Função a ser executada pela thread
    void setVelocidade(int velocidade);              // Função para alterar a velocidade

signals:
    void updateGUI(int ID, int x, int y); // Sinaliza a atualização da posição do trem na malha

private:
    const int VELOCIDADE_PADRAO = 100;
    const int VELOCIDADE_MAXIMA = 200;
    int x;           // Posição X do trem na tela
    int y;           // Posição Y do trem na tela
    int ID;          // ID do trem
    int velocidade;  // Velocidade em milissegundos entre as mudanças de posição do trem
    Semaforo *semaforo; // Semáforos utilizados para administrar o andamento dos trens e evitar colisões
    void moverTrem1(); // Logica para movimentação do trem 1
    void moverTrem2(); // Logica para movimentação do trem 2
    void moverTrem3(); // Logica para movimentação do trem 3
    void moverTrem4(); // Logica para movimentação do trem 4
    void moverTrem5(); // Logica para movimentação do trem 5
};

#endif // TREM_H
