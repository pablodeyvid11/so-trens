#include "trem.h"


Trem::Trem(int ID, int x, int y, Semaforo *&semaforo) : x(x), y(y), ID(ID), velocidade(100), semaforo(semaforo) {}


void Trem::run() {
    while (true) {
        switch (ID) {
        case 1:
            if (velocidade == 200) {
                break;
            }
            if (y == 60 && x < 660){

                if (x == 640 && semaforo->getValorSemaforo(1) > 0) {
                    if (semaforo->getValorSemaforo(3) == 0 && semaforo->getValorSemaforo(5) == 0 && semaforo->getValorSemaforo(7) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(2) == 0 && semaforo->getValorSemaforo(4) == 0 && semaforo->getValorSemaforo(6) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(3) == 0 && semaforo->getValorSemaforo(4) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(1));
                } else if (x == 640 && semaforo->getValorSemaforo(1) == 0) {
                    break;
                }
                x += 10;
            } else if (x == 660 && y < 200) {

                if (y == 180 && semaforo->getValorSemaforo(3) > 0) {
                    if (semaforo->getValorSemaforo(2) == 0 && semaforo->getValorSemaforo(6) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(3));
                } else if (y == 180 && semaforo->getValorSemaforo(3) == 0) {
                    break;
                }
                y += 10;
            } else if (x > 380 && y == 200) {

                if (x == 660 && semaforo->getValorSemaforo(1) == 0) {
                    sem_post(semaforo->getSemaforo(1));
                }

                if (x == 510 && semaforo->getValorSemaforo(3) == 0) {
                    sem_post(semaforo->getSemaforo(3));
                }

                if (x == 540 && semaforo->getValorSemaforo(2) > 0) {
                    sem_wait(semaforo->getSemaforo(2));
                } else if (x == 540 && semaforo->getValorSemaforo(2) == 0) {
                    break;
                }
                x -= 10;
            } else {

                if (y == 190 && semaforo->getValorSemaforo(2) == 0) {
                    sem_post(semaforo->getSemaforo(2));
                }
                y -= 10;
            }
            if (velocidade) {
                emit updateGUI(ID, x, y);
            }
            break;
        case 2:
            if (velocidade == 200) {
                break;
            }
            if (y == 60 && x < 930) {

                if (x == 660 && semaforo->getValorSemaforo(1) == 0) {
                    sem_post(semaforo->getSemaforo(1));
                }
                x += 10;
            } else if (x == 930 && y < 200) {

                if (y == 180 && semaforo->getValorSemaforo(5) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(3) == 0 && semaforo->getValorSemaforo(7) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(4) == 0 && semaforo->getValorSemaforo(7) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(5));
                } else if (y == 180 && semaforo->getValorSemaforo(5) == 0) {
                    break;
                }
                y += 10;
            } else if (x > 660 && y == 200) {

                if (x == 780 && semaforo->getValorSemaforo(5) == 0) {
                    sem_post(semaforo->getSemaforo(5));
                }

                if (x == 680 && semaforo->getValorSemaforo(1) > 0) {
                    sem_wait(semaforo->getSemaforo(1));
                } else if (x == 680 && semaforo->getValorSemaforo(1) == 0) {
                    break;
                }

                if (x == 810 && semaforo->getValorSemaforo(4) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(2) == 0 && semaforo->getValorSemaforo(6) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(3) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(4));
                } else if (x == 810 && semaforo->getValorSemaforo(4) == 0) {
                    break;
                }
                x -= 10;
            } else {

                if (x == 660 && y == 190 && semaforo->getValorSemaforo(4) == 0) {
                    sem_post(semaforo->getSemaforo(4));
                }
                y -= 10;
            }
            if (velocidade) {
                emit updateGUI(ID, x, y);
            }
            break;
        case 3:
            if (velocidade == 200) {
                break;
            }
            if (y == 200 && x < 520) {

                if (x == 360 && semaforo->getValorSemaforo(2) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(4) == 0 && semaforo->getValorSemaforo(6) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(3) == 0 && semaforo->getValorSemaforo(6) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(2));
                } else if (x == 360 && semaforo->getValorSemaforo(2) == 0) {
                    break;
                }

                if (x == 500 && semaforo->getValorSemaforo(6) > 0) {
                    sem_wait(semaforo->getSemaforo(6));
                } else if (x == 500 && semaforo->getValorSemaforo(6) == 0) {
                    break;
                }
                x += 10;
            } else if (x == 520 && y < 340) {

                if (y == 240 && semaforo->getValorSemaforo(2) == 0) {
                    sem_post(semaforo->getSemaforo(2));
                }
                y += 10;
            } else if (x > 240 && y == 340) {

                if (x == 520 && semaforo->getValorSemaforo(6) == 0) {
                    sem_post(semaforo->getSemaforo(6));
                }
                x -= 10;
            } else {
                y -= 10;
            }
            if (velocidade) {
                emit updateGUI(ID, x, y);
            }
            break;
        case 4:
            if (velocidade == 200) {
                break;
            }
            if (y == 200 && x < 790) {

                if (x == 530 && semaforo->getValorSemaforo(6) == 0) {
                    sem_post(semaforo->getSemaforo(6));
                }

                if (x == 670 && semaforo->getValorSemaforo(3) == 0) {
                    sem_post(semaforo->getSemaforo(3));
                }

                if (x == 640 && semaforo->getValorSemaforo(4) > 0) {
                    if (semaforo->getValorSemaforo(5) == 0 && semaforo->getValorSemaforo(7) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(4));
                } else if (x == 640 && semaforo->getValorSemaforo(4) == 0) {
                    break;
                }

                if (x == 770 && semaforo->getValorSemaforo(7) > 0) {
                    sem_wait(semaforo->getSemaforo(7));
                } else if (x == 770 && semaforo->getValorSemaforo(7) == 0) {
                    break;
                }
                x += 10;
            } else if (x == 790 && y < 340) {

                if (y == 240 && semaforo->getValorSemaforo(4) == 0) {
                    sem_post(semaforo->getSemaforo(4));
                }
                y += 10;
            } else if (x > 520 && y == 340) {

                if (x == 780 && semaforo->getValorSemaforo(7) == 0) {
                    sem_post(semaforo->getSemaforo(7));
                }

                if (x == 540 && semaforo->getValorSemaforo(6) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(2) == 0 && semaforo->getValorSemaforo(4) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(2) == 0 && semaforo->getValorSemaforo(3) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(6));
                } else if (x == 540 && semaforo->getValorSemaforo(6) == 0) {
                    break;
                }
                x -= 10;
            } else {

                if (x == 520 && y == 220 && semaforo->getValorSemaforo(3) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(5) == 0 && semaforo->getValorSemaforo(7) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(4) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(3));
                } else if (x == 520 && y == 220 && semaforo->getValorSemaforo(3) == 0) {
                    break;
                }
                y -= 10;
            }
            if (velocidade) {
                emit updateGUI(ID, x, y);
            }
            break;
        case 5:
            if (velocidade == 200) {
                break;
            }
            if (y == 200 && x < 1070) {

                if (x == 940 && semaforo->getValorSemaforo(5) == 0) {
                    sem_post(semaforo->getSemaforo(5));
                }

                if (x == 800 && semaforo->getValorSemaforo(7) == 0) {
                    sem_post(semaforo->getSemaforo(7));
                }
                x += 10;
            } else if (x == 1070 && y < 340) {
                y += 10;
            } else if (x > 790 && y == 340) {

                if (x == 810 && semaforo->getValorSemaforo(7) > 0) {
                    if (semaforo->getValorSemaforo(1) == 0 && semaforo->getValorSemaforo(3) == 0 && semaforo->getValorSemaforo(5) == 0) {
                        break;
                    }
                    if (semaforo->getValorSemaforo(4) == 0 && semaforo->getValorSemaforo(5) == 0) {
                        break;
                    }
                    sem_wait(semaforo->getSemaforo(7));
                } else if (x == 810 && semaforo->getValorSemaforo(7) == 0) {
                    break;
                }
                x -= 10;
            } else {

                if (x == 790 && y == 220 && semaforo->getValorSemaforo(5) > 0) {
                    sem_wait(semaforo->getSemaforo(5));
                } else if (x == 790 && y == 220 && semaforo->getValorSemaforo(5) == 0) {
                    break;
                }
                y -= 10;
            }
            if (velocidade) {
                emit updateGUI(ID, x, y);
            }
            break;
        default:
            break;
        }
        msleep(velocidade);
    }
}

void Trem::setVelocidade(int valor) {
    this->velocidade = valor;
}
