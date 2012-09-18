require 'set'
s = Set.new

n = gets.to_i
while n > 1
  s.add(n)
  if n %2 == 0
    n /= 2
  else
    n = n * 3 + 3
  end
  if s.include?(n)
    puts "NIE"
    break
  end
end
if n == 1 || n == 0
  puts "TAK"
end
