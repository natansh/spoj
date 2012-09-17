fact = [];
fact[0] = 1;
(1..100).each do | i |
  fact[i] = fact[i-1] * i;
end

t = gets.to_i
(1..t).each do
  num = gets.to_i
  puts fact[num]
end
