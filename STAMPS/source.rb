t = gets.chomp.to_i
(1..t).each do |index|
  num_stamps, num_friends = gets.chomp.split(' ').map(&:to_i)
  stamps = gets.chomp.split(' ').map(&:to_i).sort.reverse

  i = 0
  sum = 0
  while(i < num_friends && sum < num_stamps)
    sum += stamps[i]
    i += 1
  end

  puts "Scenario ##{index}:"
  if (sum < num_stamps)
    puts "impossible"
  else
    puts "#{i}"
  end
  puts ""
end

