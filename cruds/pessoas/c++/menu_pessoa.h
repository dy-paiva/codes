// ----------------------------------------------------------------
//  Gerenciador de Records
// ----------------------------------------------------------------
#ifndef MENUPESSOA_H
#define MENUPESSOA_H

#include "record.h"

class MenuPessoa : public Record {
  public:
    MenuPessoa() { table_name = "menu_pessoas"; }
};

#endif
