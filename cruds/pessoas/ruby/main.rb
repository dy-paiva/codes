# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------

items = []

file_read = File.open('../../_records/menu_pessoas.txt', 'a+')
file_read.each_line do |line|
  next if line =~ /^(\/\/)/
  code, item = line.split(';')
  items.push "#{code.strip} - #{item.strip}"
end
file_read.close

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

    file_read = File.open('../../_records/pessoas.txt', 'a+')
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
        file_write = File.open('../../_records/pessoas.txt', 'a+')
        file_write.puts nome
        file_write.close
      end
  end
end
