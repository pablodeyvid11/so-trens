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
    int x;           // Posição X do trem na tela
    int y;           // Posição Y do trem na tela
    int ID;          // ID do trem
    int velocidade;  // Velocidade em milissegundos entre as mudanças de posição do trem
    Semaforo *semaforos; // Semáforos utilizados para administrar o andamento dos trens e evitar colisões
};

#endif // TREM_H
