// ----------------------------------------------------------------
//  Crud de pessoas
// ----------------------------------------------------------------

#include "pessoa.h"
#include "menu_pessoa.h"

#include <vector>
#include <iostream>
#include <typeinfo>

using namespace std;

int main(int argc, char **argv) {
  Pessoa pessoa;
  MenuPessoa menu_pessoa;

  vector<string> items = menu_pessoa.all();

  int code;
  while (true) {
    system("clear");

    cout << " Escolha uma das opções: \n\n";
    for(vector<string>::const_iterator i = items.begin(); i != items.end(); ++i) {
      cout << ' ' << *i << endl;
    }
    cout << endl << " Opção: ";

    cin >> code;
    system("clear");

    switch (code) {
      case 0: {
        cout << "\n Obrigado! \n\n";
        return 0;
      }
      case 1: {
        cout << "\n Lista de Pessoas \n\n";

        vector<string> pessoas = pessoa.all();

        if (pessoas.empty()) {
          cout << "   Nenhuma pessoa encontrada \n\n";
        } else {
          for(vector<string>::const_iterator i = pessoas.begin(); i != pessoas.end(); ++i){
            cout << " ----- Pessoa " << (i - pessoas.begin()) + 1 << "\n";
            cout << "  Nome: " << *i << "\n\n";
          }
        }

        cout << " Digite enter para continuar";
        cin.get();
        cin.get();
        break;
      }
      case 2: {
        string nome = "";
        while (nome.empty()) {
          system("clear");
          cout << "\n Cadastro de Pessoa (0 para cancelar) \n\n";
          cout << " Nome: ";
          getline(cin, nome);
        }

        if (nome != "0") {
          pessoa.create(nome);
        }
        break;
      }
    }
  }
}
