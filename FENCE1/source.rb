while true
  l = gets.to_i
  if l == 0
    break
  end
  puts (l*l/(2.0 * Math::PI)).round(2)
end
