t = gets.to_i
t.times do |i|
  m, n = gets.chomp.split(' ').map(&:to_i)
  if m <= n
    if m % 2 == 0
      puts "L"
    else
      puts "R"
    end
  else
    if n % 2 == 0
      puts "U"
    else
      puts "D"
    end
  end
end


