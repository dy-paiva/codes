// ----------------------------------------------------------------
//  Crud de pessoas
// ----------------------------------------------------------------

#include <vector>
#include <regex>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string line;
  ifstream read_file("../../_records/menu_pessoas.txt");
  vector<string> items;

  while ( getline(read_file, line)) {
    if ( regex_search(line, regex { R"(//( *)(\w+*))" }) ) {
      continue;
    }
    line = regex_replace(line, regex { R"(;( *))" }, " - ");
    items.push_back( line );
  }

  read_file.close();

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

        string line;
        ifstream read_file("../../_records/pessoas.txt");
        vector<string> pessoas = {};

        while ( getline(read_file, line)) {
          if (regex_search(line, regex { R"(//( *)(\w+*))" }) ) continue;
          pessoas.push_back(line);
        }

        read_file.close();

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
          ofstream write_file("../../_records/pessoas.txt", ios::app);
          write_file << nome << endl;
          write_file.close();
        }
        break;
      }
    }
  }
}
