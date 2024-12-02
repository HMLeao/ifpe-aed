//
// Created by henri on 26/11/2024.
//
#include "veiculo.h"

void Veiculo::mover() {
     cout << "Veiculo \"" << nome << "\" se moveu!" << endl;
}

int Terrestre::getCapacidadeMax() {
    return this->cap_pass;
}

void Terrestre::setCapacidadeMax(int cap_pass) {
    this->cap_pass = cap_pass;
}

void Terrestre::mover() {
    cout << "Veiculo terrestre \"" << this->nome << "\" se moveu!" << endl;
}

float Aquatico::getCargaMax() {
    return this->carga_max;
}

void Aquatico::setCargaMax(float carga_max) {
    this->carga_max = carga_max;
}

void Aquatico::mover() {
    cout << "Veiculo aquatico \"" << this->nome << "\" se moveu!" << endl;
}

void Aereo::setVelocidadeMax(float vel_max) {
    this->vel_max = vel_max;
}

float Aereo::getVelocidadeMax() {
    return this->vel_max;
}

void Aereo::mover() {
    cout << "Veiculo aereo \"" << this->nome << "\" se moveu!" << endl;
}


