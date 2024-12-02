#include <iostream>

#include "veiculo.h"

using namespace std;

int main() {
    // {
    //
    //     Veiculo veiculo1("v1");
    //     {
    //         Veiculo veiculo2("v2");
    //         {
    //             Veiculo veiculo3("v3");
    //         }
    //     }
    // }
    {
        const Veiculo * obj1 = new Veiculo("v1");
        obj1->setNumRodas(4);
        {
            const Veiculo * obj2 = new Veiculo("v2");
            obj2->setNumRodas(2);
            {
                const Veiculo * obj3 = new Veiculo("v3");
                obj3->setNumRodas(3);
                delete obj3;
            }
            delete obj2;
        }
        delete obj1;
    }
    return 0;
}
