#include <iostream>

#include "aluno.h"
#include "arranjo.h"
#include "funcoes.h"

#define MGS_ERRO "[ERRO] Não foi possível inserir valor no arranjo: "

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

    cout << "[====== Exibindo arranjo de int ======]" << endl;
    arr.exibir();

    Arranjo<float> arranjoFloat(10);
    arranjoFloat.set(2, 2.3);
    arranjoFloat.set(3, 22.456);
    arranjoFloat.set(7, 1.5);
    arranjoFloat.set(8, 0.00056);

    cout << "[====== Exibindo arranjo de float ======]" << endl;
    arranjoFloat.exibir();


    cout << "[====== tentando acessar um índice inválido e tratando a exceção: ======]" << endl;
    try {
        arranjoFloat.set(15, 22.5);
    } catch (IndiceInvalido indice_invalido) {
        cout << MGS_ERRO << indice_invalido.getMsg() << endl;
    }


    Arranjo<Aluno> turma(3);
    turma.set(0, Aluno("Joao","1234"));
    turma.set(1, Aluno("Maria","5235"));
    turma.set(2, Aluno("Jose","2412"));
    cout << "====== Exibindo arranjo de Aluno ======" << endl;
    turma.exibir();

    cout << "[====== Tentando acessar um índice inválido do arranjo de Alunos]" << endl;
    try {
        turma.set(15, Aluno("Marcelo","7890"));
    } catch (IndiceInvalido indice_invalido) {
        cout << MGS_ERRO << indice_invalido.getMsg() << endl;
    }

    return 0;
}
