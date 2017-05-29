// ----------------------------------------------------------------
//  Crud de pessoas
// ----------------------------------------------------------------

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string file_name;
  file_name = "../records.txt";

  string items[] = {"1 - Lista de Pessoas", "2 - Cadastrar Pessoa", "0 - Sair"};
  string pessoas[] = {};

  // fileObj = File.open(file_name, 'a+')
  // fileObj.each_line do |line|
  //   next if line =~ /^(\/\/)/
  //   pessoas.push nome: line
  // end

  int code;
  while (code != 0) {
    system("clear");

    cout << " Escolha uma das opções para poder jogar: \n\n";
    for (int i = 0; i < sizeof(items)/sizeof(items[0]); ++i) {
      cout << ' ' << items[i] << endl;
    }
    cout << endl;

    cout << " Opção: " << code;
    cin >> code;

    switch (code) {
      case 0:
        cout << "\n Obrigado \n\n";
        return 0;
      case 1:
        cout << "\n Lista de Pessoas \n\n";

        //     if pessoas.empty?
        //       puts "   Nenhuma pessoa encontrada \n\n"
        //     else
        //       pessoas.each_with_index do |pessoa, idx|
        //         puts " ----- Pessoa #{idx + 1}\n"
        //         puts "  Nome: #{pessoa[:nome]}"
        //         puts "\n"
        //       end
        //     end

        cout << " Digite enter para continuar"
        cin;
      case 2:
        cout << "\n Cadastro de Pessoa (0 para cancelar) \n\n";
        //     nome = ''
        //     while nome.empty?
        //       system("clear");
        //       puts "\n Cadastro de Pessoa (0 para cancelar) \n\n"

        //       print " Nome: "
        //       nome = gets.strip
        //     end

        //     unless nome == '0'
        //       fileObj.puts nome
        //       pessoas.push(nome: nome)
        //       puts "\n Cadastrado com Sucesso!\n"
        //     end
    }
  }
}
