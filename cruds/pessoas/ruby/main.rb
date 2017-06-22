# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------

load 'pessoa.rb'
load 'menu_pessoa.rb'

while true
  code = get_code_options

  case code
  when '0'
    puts "\n Obrigado! \n\n"
    return
  when '1' then list_people
  when '2' then create_person
  end
end

def get_code_options
  system("clear")

  puts " Escolha uma das opções: \n\n"
  MenuPessoa.all.each{ |item| puts " #{item['code']} - #{item['name']}" }
  puts "\n"

  print " Opção: "
  code = gets.strip
  system("clear")

  code
end

def list_people
  pessoas = Pessoa.all

  system("clear")
  puts "\n Lista de Pessoas \n\n"
  if pessoas.empty?
    puts "   Nenhuma pessoa encontrada \n\n"
  else
    pessoas.each_with_index do |pessoa, idx|
      puts " ----- Pessoa #{idx + 1}\n"

      text  = ["  Nome: #{pessoa['name']}"]
      text << "Age: #{pessoa['age']}" if pessoa['age']

      puts text.join(', ')
      puts "\n"
    end
  end

  print " Digite enter para continuar"
  gets.strip
end

def create_person
  nome = ''
  while nome.empty?
    system("clear")
    puts "\n Cadastro de Pessoa (0 para cancelar) \n\n"

    print " Nome: "
    nome = gets.strip
  end

  Pessoa.create(name: nome) unless nome == '0'

  list_people
end
