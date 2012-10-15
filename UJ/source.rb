def fast_exp(n, k)
  return 1 if k == 0
  res = fast_exp(n, k/2)
  if k % 2 == 0
    return res * res
  else
    return n * res * res
  end
end

while true
  n, d = gets.chomp.split(' ').map(&:to_i)
  if n == 0 && d == 0
    break
  end
  puts fast_exp(n, d)
end
