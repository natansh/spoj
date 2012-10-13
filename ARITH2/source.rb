t = gets.to_i
(1..t).each do
  gets
  calculator = gets.chomp.split(' ')
  if(calculator.first == '=')
    puts "0"
    break
  end
  result = calculator.shift.to_i
  while(calculator.size > 0)
    operator = calculator.shift
    if(operator == '=')
      puts result
      break
    end
    operand = calculator.shift.to_i

    if(operator == '+')
      result += operand
    elsif(operator == '-')
      result -= operand
    elsif(operator == '*')
      result *= operand
    elsif(operator == '/')
      result /= operand
    end
  end
end
