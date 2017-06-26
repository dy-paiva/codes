# -*- coding: utf-8 -*-
#
# ----------------------------------------------------------------
#  Model de Menu Pessoa
# ----------------------------------------------------------------
#
#!/usr/bin/python

import os
import re

from record import Record

class MenuPessoa (Record):
  def __init__(self):
    self.table_name = 'menu_pessoas'
