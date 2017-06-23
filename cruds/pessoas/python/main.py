# -*- coding: utf-8 -*-
#
# ----------------------------------------------------------------
#  Crud de pessoas
# ----------------------------------------------------------------
#
#!/usr/bin/python

import os
import re

items = []

read_file = open("../../_records/menu_pessoas.txt", 'r')

str_read = read_file.read()
for line in str_read.splitlines(str_read.count('\n')):
  if re.search('//', line): continue
  code, item = line.split(';')
  items.append(code.replace(' ', '') + ' - ' + item.replace(' ', '').replace("\n", ''))

read_file.close()

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

  read_file = open("../../_records/pessoas.txt", 'r')
  pessoas = []

  str_read = read_file.read()
  for line in str_read.splitlines(str_read.count('\n')):
    if re.search('//', line): continue
    pessoas.append(line)

  read_file.close()

  if not pessoas:
    print "   Nenhuma pessoa encontrada \n"
  else:
    for (idx, pessoa) in enumerate(pessoas):
      print " ----- Pessoa", idx + 1
      print "  Nome:", pessoa

  raw_input(" Digite enter para continuar")

def create_person():
  nome = ''
  while not nome:
    os.system("clear");
    print "\n Cadastro de Pessoa (0 para cancelar) \n"
    nome = raw_input(" Nome: ")

  if nome != '0':
    file_write = open("../../_records/pessoas.txt", 'a')
    file_write.write("%s\n" % nome)
    file_write.close()

main()
