// ----------------------------------------------------------------
//  Campo Minado
// ----------------------------------------------------------------

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string items[] = {"1 - Nível 1", "2 - Nível 2", "0 - Sair"};
  int code;

  while (true) {
    system("clear");

    cout << "Escolha uma das opções para poder jogar: \n\n";
    for (int i = 0; i < sizeof(items)/sizeof(items[0]); ++i) {
      cout << items[i] << endl;
    }
    cout << endl;

    cin >> code;
    switch (code) {
      case 0:
        cout << "Fim de jogo\n\n";
        return 0;
      case 1:
        cout << "\nNovo jogo\n\n";
      case 2:
        cout << "\nNovo jogo\n\n";
    }
  }
}
