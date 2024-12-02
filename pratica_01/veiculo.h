#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

using namespace std;

class Roda {
    public:
    Roda() {
        cout << "Uma roda foi criada!" << endl;
    }

    ~Roda() {
        cout << "Uma roda foi destruida!" << endl;
    }
};

class Veiculo {
    string nome;
    mutable int num_rodas;
    mutable Roda * rodas{};
public:
    Veiculo(const char * nome) {
        this->nome = string(nome);
        this->num_rodas = NULL;
        cout << "um novo veiculo foi criado com o nome " + this->nome << endl;
    }

    ~Veiculo() {
        delete [] this->rodas;
        cout << "o veiculo de nome " + this->nome + " foi destruido" << endl;
    }

    void setNumRodas(int num_rodas) const;

    int getNumRodas() const;
};

#endif //VEICULO_H
