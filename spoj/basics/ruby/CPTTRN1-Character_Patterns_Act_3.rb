str_colun = "..*"

t = readline.to_i
t.times do
  l, c = readline.strip.split(' ').map(&:to_i)

  str_line  = "*";
  separator = "*";
  c.times { separator += "***"; str_line += str_colun }

  str_line += "\n#{str_line}\n";
  l.times { print "#{separator}\n#{str_line}" }

  print "#{separator}\n"
end
