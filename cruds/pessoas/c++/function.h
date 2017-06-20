// ----------------------------------------------------------------
//  Funções auxiliares
// ----------------------------------------------------------------
#ifndef FUNCTION_H
#define FUNCTION_H

#include <sstream>
#include <vector>

using namespace std;

// function split
vector<string> split(const string &s, char delim) {
  vector<string> result;

  stringstream ss;
  ss.str(s);

  string item;
  while (getline(ss, item, delim)) {
    result.push_back(item);
  }

  return result;
}

#endif
