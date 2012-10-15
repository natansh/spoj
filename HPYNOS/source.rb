n = gets.chomp.to_i

cache = {}

count = 0
until n == 1 || cache.has_key?(n)
  cache[n] = true
  n = n.to_s.split('').map(&:to_i).inject(0) do |res, elem|
    res += elem * elem
  end
  count += 1
end

if n == 1
  puts count
else
  puts "-1"
end
