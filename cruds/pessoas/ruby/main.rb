# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------

items = ["1 - Lista de Pessoas", "2 - Cadastrar Pessoa", "0 - Sair"]

code = nil
while (code != '0')
  system("clear");

  puts " Escolha uma das opções: \n\n"
  items.each{ |item| puts " #{item}" }
  puts "\n"

  print " Opção: "
  code = gets.strip
  system("clear");

  case code
  when '0'
    puts "\n Obrigado! \n\n"
  when '1'
    pessoas = []

    file_read = File.open('../records.txt', 'a+')
    file_read.each_line do |line|
      next if line =~ /^(\/\/)/
      pessoas.push line
    end
    file_read.close

    puts "\n Lista de Pessoas \n\n"
    if pessoas.empty?
      puts "   Nenhuma pessoa encontrada \n\n"
    else
      pessoas.each_with_index do |pessoa, idx|
        puts " ----- Pessoa #{idx + 1}\n"
        puts "  Nome: #{pessoa}"
        puts "\n"
      end
    end

    print " Digite enter para continuar"
    gets.strip
  when '2'
      nome = ''
      while nome.empty?
        system("clear");
        puts "\n Cadastro de Pessoa (0 para cancelar) \n\n"

        print " Nome: "
        nome = gets.strip
      end

      unless nome == '0'
        file_write = File.open('../records.txt', 'a+')
        file_write.puts nome
        file_write.close
      end
  end
end
