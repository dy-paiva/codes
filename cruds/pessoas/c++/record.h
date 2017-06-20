// ----------------------------------------------------------------
//  Gerenciador de Records
// ----------------------------------------------------------------
#ifndef RECORD_H
#define RECORD_H

#include "function.h"

#include <vector>
#include <regex>
#include <fstream>
#include <iostream>

using namespace std;

class Record {
  public:
    string table_name;

    vector<string> all() {
      string line;
      vector<string> list;
      vector<string> opts;

      ifstream file(get_file_name());
      while ( getline(file, line)) {
        if ( regex_search(line, regex { R"(//( *)(\w+*))" }) ) {
          continue;
        }
        opts = split(line, ';');

        line = "";
        for(vector<string>::const_iterator i = opts.begin(); i != opts.end(); ++i) {
          if ((i - opts.begin()) % 2 != 0) { line += " - "; }
          line += regex_replace(split(*i, ':')[1], regex { R"(^ )" }, "");
        }

        list.push_back( line );
      }
      file.close();

      return list;
    }

    void create(string name) {
      ofstream file(get_file_name(), ios::app);

      file << "name: " << name << endl;
      file.close();
    }

  private:
    string get_file_name() {
      string file_name;
      file_name  = "../../_records/";
      file_name += table_name;
      file_name += ".txt";

      return file_name;
    }
};

#endif
