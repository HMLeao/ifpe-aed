//
// Created by henrique on 05/12/24.
//

#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include "arranjo.h"

using namespace std;

class Aluno {
private:
    string nome;
    string mat;
public:
    Aluno() {}
    Aluno(const char * nome, const char * mat) : nome(nome), mat(mat) {}
    friend class Arranjo<Aluno>;
    Aluno & operator=(const Aluno & aluno) {
        mat = aluno.mat;
        nome = aluno.nome;
        return * this;
    }

    friend ostream & operator<<(ostream & out, const Aluno & aluno);
};

template<>
  void Arranjo<Aluno>::set(int idx, const Aluno & aluno) {
    validaIndice(idx);
    this->items[idx].mat = aluno.mat;
    this->items[idx].nome = aluno.nome;
}

ostream & operator<<(ostream & out, const Aluno & aluno) {
    out << aluno.mat << " = " << aluno.nome << endl;
    return out;
}

template<>
void Arranjo<Aluno>::exibir() {
    // exiba cada aluno do array no formato "idx : mat = nome"
    for (int i = 0; i < tamanho; i++) {
        std::cout << i << ": " << items[i].mat << " " << items[i].nome << std::endl;
    }
}

#endif //ALUNO_H
