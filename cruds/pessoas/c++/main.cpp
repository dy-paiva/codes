// ----------------------------------------------------------------
//  Crud de pessoas
// ----------------------------------------------------------------

#include "pessoa.h"
#include "menu_pessoa.h"

#include <vector>

using namespace std;

// functions
int get_code_options() {
  int code;
  MenuPessoa menu_pessoa;
  vector<string> items = menu_pessoa.all();

  system("clear");

  cout << " Escolha uma das opções: \n\n";
  for(vector<string>::const_iterator i = items.begin(); i != items.end(); ++i) {
    cout << ' ' << *i << endl;
  }
  cout << endl << " Opção: ";

  cin >> code;
  system("clear");

  return code;
}

void list_people() {
  system("clear");

  cout << "\n Lista de Pessoas \n\n";

  Pessoa pessoa;
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
}

void create_person() {
  Pessoa pessoa;

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
}

// main function
int main(int argc, char **argv) {
  int code;

  while (true) {
    code = get_code_options();

    switch (code) {
      case 0: {
        cout << "\n Obrigado! \n\n";
        return 0;
      }
      case 1: { list_people(); break; }
      case 2: { create_person(); break; }
    }
  }
}
