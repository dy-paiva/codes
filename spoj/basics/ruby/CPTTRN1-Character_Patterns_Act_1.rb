t = gets.chomp.to_i
for i in (0..t)
  l, c = gets.chomp.strip.split(' ').map(&:to_i)

  for j in (0...l).to_a
    str = j.odd? ? "*" : "."

    result = ""
    for k in (0...c).to_a
      str = (str == "*") ? "." : "*"
      result += str
    end

    puts "#{result}"
  end
end
