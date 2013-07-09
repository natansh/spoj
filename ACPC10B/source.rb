MAX_VAL = 10000000000
while(true)
  a, b = gets.chomp.split.map(&:to_i)
  if a == 0 && b == 0
    break
  end
  na = a
  nb = b
  ma = {}
  mb = {}

  ca = false, cb = false

  count = 1
  until ma.has_key?(na)
    ma[na] = count
    na = na.to_s.split('').map(&:to_i).map {|i| i * i}.inject(:+)
    count += 1
  end

  count = 1
  until mb.has_key?(nb)
    mb[nb] = count
    nb = nb.to_s.split('').map(&:to_i).map {|i| i * i}.inject(:+)
    count += 1
  end

  min = MAX_VAL 
  ma.each do |key, value|
    if mb.has_key?(key) && (ma[key] + mb[key]) < min
      min = ma[key] + mb[key]
    end
  end

  puts a.to_s + ' ' + b.to_s + ' ' + ((min == MAX_VAL) ? '0' : min.to_s)
end
