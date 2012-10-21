t = gets.chomp.to_i
(1..t).each do
  n = gets.chomp.to_i
  if n == 0 || n == 1
    puts "1"
  else
    puts (Math.log10(2 * Math::PI * n)/2.0 + n * Math.log10(n/Math::E)).ceil
  end
end
