# ----------------------------------------------------------------
#  Campo Minado
# ----------------------------------------------------------------

items = ["1 - Nível 1", "2 - Nível 2", "0 - Sair"]

code = nil
while (code != 0)
  system("clear");

  puts "Escolha uma das opções para poder jogar: \n\n"
  items.each{ |item| puts item }
  puts "\n"

  code = gets.strip.to_i
  case code
  when 0
    puts "Fim de jogo\n\n"
    return
  when 1
    puts "\nNovo jogo\n\n"
  when 2
    puts "\nNovo jogo\n\n"
  end
end
