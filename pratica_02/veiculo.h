//
// Created by henri on 26/11/2024.
//
#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iostream>

using namespace std;

class Veiculo {
    public:
    Veiculo(const char * nome) {
        this->nome = nome;
        cout << "Veiculo \"" << nome << "\" foi criado" << endl;
    }
    virtual void mover();
    protected:
    string nome;
};

class Terrestre: public Veiculo {
private:
    int cap_pass; // número máximo de passageiros
public:
    Terrestre(const char * nome) : Veiculo(nome) {
        this->nome = nome;
        this->cap_pass = 5;
    }
    void mover();
    void setCapacidadeMax(int cap);
    int getCapacidadeMax();
};

class Aquatico: public Veiculo {
private:
    float carga_max; // carga máxima em toneladas
public:
    Aquatico(const char * nome) : Veiculo(nome) {
        this->nome = nome;
        this->carga_max = 10;
    }
    void mover();
    void setCargaMax(float carga_max);
    float getCargaMax();
};

class Aereo: public Veiculo {
private:
    float vel_max; // velocidade máxima em km/h
public:
    Aereo(const char * nome) : Veiculo(nome) {
        this->nome = nome;
        this->vel_max = 100;
    }
    void mover();
    void setVelocidadeMax(float vel_max);
    float getVelocidadeMax();

};


#endif //VEICULO_H
