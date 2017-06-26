# -*- coding: utf-8 -*-
#
# ----------------------------------------------------------------
#  Gerenciador de Records
# ----------------------------------------------------------------
#
#!/usr/bin/python

import os
import re

class Record:
  table_name = ''

  def all(self):
    items = []

    read_file = open(self.file_name(), 'r')

    str_read = read_file.read()
    for line in str_read.splitlines(str_read.count('\n')):
      if re.search('//', line): continue
      # code, item = line.split(';')
      items.append(line.replace("\n", ''))

    read_file.close()

    return items

  def create(self, nome):
    file_write = open(self.file_name(), 'a')
    file_write.write("%s\n" % nome)
    file_write.close()

  def file_name(self):
    file_name  = "../../_records/"
    file_name += self.table_name
    file_name += ".txt"
    return file_name
