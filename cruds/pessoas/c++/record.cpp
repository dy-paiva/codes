// ----------------------------------------------------------------
//  Gerenciador de Records
// ----------------------------------------------------------------

#include <vector>
#include <regex>
#include <fstream>
#include <iostream>

using namespace std;

class Record {
  public:
    string table_name() {
      // tn = self.name.gsub(/::/, '/')
      // tn = tn.gsub(/([A-Z]+)([A-Z][a-z])/,'\1_\2')
      // tn = tn.gsub(/([a-z\d])([A-Z])/,'\1_\2')
      // tn = tn.tr("-", "_").downcase

      // "#{tn}s"
      return "menu_pessoas";
    }

    vector<string> all() {
      string line;
      vector<string> list;

      ifstream file = get_file_read();
      while ( getline(file, line)) {
        if ( regex_search(line, regex { R"(//( *)(\w+*))" }) ) {
          continue;
        }
        line = regex_replace(line, regex { R"(;( *))" }, " - ");
        list.push_back( line );
      }
      file.close();

      return list;
    }

  private:
    string get_file_name() {
      string file_name;
      file_name = "../../_records/";
      file_name += table_name();
      file_name += ".txt";

      return file_name;
    }

    ifstream get_file_read() {
      ifstream file(get_file_name());

      return file;
    }

    ofstream get_file_write() {
      ofstream file(get_file_name());

      return file;
    }
};
//   def self.create(*items)
//     file = get_file
//     keys = file.read.split("\n")[1].gsub('//', '').split('; ').map(&:strip)

//     lines = []
//     items.each do |item|
//       line = []
//       item.each do |key, value|
//         k = keys.find{ |k| k == key.to_s }
//         fail "Não existe a chave #{key} na table #{table_name}" if k.nil?
//         line << "#{k}: #{value}"
//       end

//       lines.push line.join('; ')
//     end

//     lines.each do |line|
//       file.puts line
//       file.close
//     end
//   end
// end
