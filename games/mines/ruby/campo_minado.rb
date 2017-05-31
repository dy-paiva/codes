# ----------------------------------------------------------------
#  Campo Minado
# ----------------------------------------------------------------
require 'jogo'

class CampoMinado
  attr_accessor :level, :jogo

  # items do menu principal
  ITEMS = [
    { code: 1,   text: "1 - Nível 1 ( 8 x  8)", },
    { code: 2,   text: "2 - Nível 2 (16 x 16)", },
    { code: 3,   text: "3 - Nível 3 (30 x 16)", },
    { code: nil, text: "-----------", },
    { code: 0,   text:    "0 - Sair"  },
  ]

  def exec
    code = nil
    while (code != 0)
      system("clear");

      list_menu

      code = gets.strip.to_i
      set_level(code)
    end

    puts "Fim de jogo\n\n"
  end

  def list_menu
    puts "Escolha uma das opções para poder jogar: \n\n"
    ITEMS.each{ |item| puts item[:text] }
    puts "\n"
  end

  def set_level(code)
    case code
    when 0
    when 1
      level = 1
    when 2
      level = 2
    when 3
      level = 3
    else
      level = nil
    end
    jogo = ::Jogo.new
  end
end

campo_minado = CampoMinado.new
campo_minado.exec
