#include <iostream>

#include "arranjo.h"
#include "funcoes.h"

using namespace std;

int main() {
    // int x = 5, y = 10, z = 30;
    // float x = 5.5, y = 10.15, z = 30.7;
    // double x = 5.5, y = 10.15, z = 30.7;
    //
    // cout << "Antes: x = " << x << " y = " << y << endl;
    //
    // funcoes::trocar(x, y);
    //
    // cout << "Depois : x = " << x << " y = " << y << endl;
    // cout << "Minimo entre " << x << " e " << y << ": " << funcoes::minimo(x, y) << endl;
    // cout << "Maximo entre " << y << " e " << z << ": " << funcoes::maximo(y, z) << endl;
    //
    // cout << "Minimo de \"strA\" e \"strB\": " << funcoes::minimo("strA", "strB") << endl;
    // cout << "Maximo de \"strA\" e \"strB\": " << funcoes::maximo("strA", "strB") << endl;


    Arranjo<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);
    arr.exibir();

    Arranjo<float> arranjoFloat(10);
    arranjoFloat.set(2, 2.3);
    arranjoFloat.set(3, 22.456);
    arranjoFloat.set(7, 1.5);
    arranjoFloat.set(8, 0.00056);
    arranjoFloat.exibir();

    // tentando acessar um índice inválido e tratando a exceção:
    try {
        arranjoFloat.set(15, 22.5);
    } catch (IndiceInvalido indice_invalido) {
        cout << "Erro ao inserir valor no arranjo: " << indice_invalido.getMsg() << endl;
    }

    return 0;
}
