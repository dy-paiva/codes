// ----------------------------------------------------------------
//  Gerenciador de Records
// ----------------------------------------------------------------
#ifndef PESSOA_H
#define PESSOA_H

#include "record.h"

class Pessoa : public Record {
  public:
    Pessoa() { table_name = "pessoas"; }
};

#endif
