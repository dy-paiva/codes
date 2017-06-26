# -*- coding: utf-8 -*-
#
# ----------------------------------------------------------------
#  Model de Pessoa
# ----------------------------------------------------------------
#
#!/usr/bin/python

import os
import re

from record import Record

class Pessoa (Record):
  def __init__(self):
    self.table_name = 'pessoas'
