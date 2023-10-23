#include "semaforo.h"

Semaforo::Semaforo() {
    for (int i = 0; i < NUM_SEMAFOROS; i++) {
        sem_init(&semaforos[i], 0, 1);
    }
}

sem_t* Semaforo::getSemaforo(int num) {
    if (num >= 1 && num <= NUM_SEMAFOROS) {
        return &semaforos[num - 1];
    }
    return nullptr;  // Número de semáforo inválido
}

int Semaforo::getValorSemaforo(int num) {
    if (num >= 1 && num <= NUM_SEMAFOROS) {
        sem_getvalue(&semaforos[num - 1], &valores[num - 1]);
        return valores[num - 1];
    }
    return -1;  // Número de semáforo inválido
}
