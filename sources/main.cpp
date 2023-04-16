#include <locale.h>

#include <iostream>

#include "../headers/dominios.h"
// #include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
// #include "../headers/testes_entidades.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    TUTelefone teste;
    switch (teste.run()) {
        case TUTelefone::SUCESSO:
            cout << "Telefone - SUCESSO" << endl;
            break;

        case TUTelefone::FALHA:
            cout << "Telefone - FALHA" << endl;
            break;
            break;
    }

    return 0;
}
