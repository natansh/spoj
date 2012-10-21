num = 1;
100.times do |i|
  num *= i+1
  print (i+1).to_s + " " + num.to_s.length.to_s + " "
  puts num
end

(2..100).each do |i|
  len = (Math.log10(2 * Math::PI * i)/2.0 + i * Math.log10(i/Math::E)).ceil
  p i
  p len
end
