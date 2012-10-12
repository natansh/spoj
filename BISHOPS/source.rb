(1..1024).each do
  n = gets.chomp.to_i
  if n == 1
    puts "1"
  else
    puts "#{ (n - 1) * 2}"
  end
end
