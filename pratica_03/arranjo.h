//
// Created by henri on 01/12/2024.
//

#ifndef ARRANJO_H
#define ARRANJO_H
#include <iostream>

class IndiceInvalido {
private:
    const char * msg;
public:
    IndiceInvalido(const char * msg) {
        this->msg = msg;
    }

    const char * getMsg() {
        return msg;
    }

    virtual ~IndiceInvalido() {}
};

template <class T>
class Arranjo {
private:
    int tamanho;
    T * items;

    void validaIndice(int idx) {
        if (idx > tamanho -1 || idx < 0) {
            throw IndiceInvalido("Tentativa de acesso fora do intervalo.");
        }
    }
public:
    Arranjo(int tam) {
        this->tamanho = tam;
        items = new T[tamanho];
    }

    virtual ~Arranjo() {
        delete[] items;
    }

    virtual T get(int idx) {
        validaIndice(idx);
        return items[idx];
    }

    virtual void set(int idx, const T & item) {
        validaIndice(idx);
        items[idx] = item;
    }

    virtual void exibir();
};

template<class T>
void Arranjo<T>::exibir() {
    for (int i = 0; i < tamanho; i++) {
        std::cout << i << ": " << items[i] << std::endl;
    }
}


#endif //ARRANJO_H
