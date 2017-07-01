# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------

load 'pessoa.rb'
load 'menu_pessoa.rb'

items = MenuPessoa.all

while true
  system("clear")

  puts " Escolha uma das opções: \n\n"
  items.each{ |item| puts " #{item['code']} - #{item['name']}" }
  puts "\n"

  print " Opção: "
  code = gets.strip
  system("clear")

  case code
  when '0'
    puts "\n Obrigado! \n\n"
    exit
  when '1'
    pessoas = Pessoa.all

    puts "\n Lista de Pessoas \n\n"
    if pessoas.empty?
      puts "   Nenhuma pessoa encontrada \n\n"
    else
      pessoas.each_with_index do |pessoa, idx|
        puts " ----- Pessoa #{idx + 1}\n"
        puts "  Nome: #{pessoa['name']}"
        puts "\n"
      end
    end

    print " Digite enter para continuar"
    gets.strip
  when '2'
    nome = ''
    while nome.empty?
      system("clear")
      puts "\n Cadastro de Pessoa (0 para cancelar) \n\n"

      print " Nome: "
      nome = gets.strip
    end

    Pessoa.create(name: nome) unless nome == '0'
  end
end
