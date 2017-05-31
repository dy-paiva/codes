# ----------------------------------------------------------------
#  Lógiga do Jogo em geral
# ----------------------------------------------------------------
require_relative 'campo_minado'

class Jogo < CampoMinado
  def initialize
    puts level
  end
end
