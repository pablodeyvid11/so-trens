#ifndef SEMAFORO_H
#define SEMAFORO_H

#include <semaphore.h>

class Semaforo {
private:
    static const int NUM_SEMAFOROS = 7;
    sem_t semaforos[NUM_SEMAFOROS];
    int valores[NUM_SEMAFOROS];

public:
    Semaforo();

    sem_t* getSemaforo(int num);
    int getValorSemaforo(int num);
};

#endif  // SEMAFORO_H
