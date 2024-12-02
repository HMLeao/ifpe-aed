#include "veiculo.h"

void Veiculo::setNumRodas(int num_rodas) const {
    this->rodas = new Roda[num_rodas];
    this->num_rodas = num_rodas;
}

int Veiculo::getNumRodas() const {
    return this->num_rodas;
}