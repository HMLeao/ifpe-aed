//
// Created by henri on 01/12/2024.
//

#ifndef FUNCOES_H
#define FUNCOES_H
#include <cstring>

namespace funcoes {
    template <class T>
    void trocar(T & a, T & b) {
        const T temp = a;
        a = b;
        b = temp;
    }

    template <class T>
    T maximo(const T a, const T b) {
        return a> b ? a : b;
    }

    template <>
    const char * maximo(const char * a, const char * b) {
        if (strcmp(a, b) >= 0) return a;
        return b;
    }

    template <class T>
    T minimo(const T a, const T b) {
        return a < b ? a : b;
    }

    template <>
    const char * minimo(const char * a, const char * b) {
        if (strcmp(a, b) <= 0) return a;
        return b;
    }
}



#endif //FUNCOES_H
