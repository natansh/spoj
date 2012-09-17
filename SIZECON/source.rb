puts STDIN.lines.take(gets.to_i).map(&:to_i).find_all{ |i| i> 0 }.inject(:+)
