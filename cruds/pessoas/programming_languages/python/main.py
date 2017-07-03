# -*- coding: utf-8 -*-
#
# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------
#
#!/usr/bin/python

import os
import re

from pessoa import Pessoa
from menu_pessoa import MenuPessoa

pessoa      = Pessoa()
menu_pessoa = MenuPessoa()

items = menu_pessoa.all()

def main():
  code = get_code_options()

  if code == '0':
    print "\n Obrigado! \n"
    return
  elif code == '1': list_people()
  elif code == '2': create_person()

  main()

def get_code_options():
  os.system("clear")

  print " Escolha uma das opções: \n"
  for item in items: print " %s" % item

  code = raw_input("\n Opção: ")
  os.system("clear")

  return code

def list_people():
  print "\n Lista de Pessoas \n"

  pessoas = pessoa.all()

  if not pessoas:
    print "   Nenhuma pessoa encontrada \n"
  else:
    for (idx, person) in enumerate(pessoas):
      print " ----- Pessoa", idx + 1
      print "  Nome:", person, "\n"

  raw_input(" Digite enter para continuar")

def create_person():
  nome = ''
  while not nome:
    os.system("clear");
    print "\n Cadastro de Pessoa (0 para cancelar) \n"
    nome = raw_input(" Nome: ")

  if nome != '0':
    pessoa.create(nome)

main()
