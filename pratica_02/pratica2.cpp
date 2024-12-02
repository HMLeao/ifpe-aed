#include <iostream>
#include "veiculo.h"

using namespace std;

int main() {
    // Veiculo veiculo("v1");
    // Terrestre terrestre("t1");
    // Aquatico aquatico("aq1");
    // Aereo aereo("ae1");
    //
    //

    Veiculo * terr, * aqua, * aereo;
    terr = new Terrestre("VT1");
    static_cast<Terrestre *>(terr)->setCapacidadeMax(45);
    aqua = new Aquatico("VQ1");
    static_cast<Aquatico *>(aqua)->setCargaMax(12.5);
    aereo = new Aereo("VA1");
    static_cast<Aereo *>(aereo)->setVelocidadeMax(1040.5);

    terr->mover();
    aqua->mover();
    aereo->mover();

    return 0;
}
