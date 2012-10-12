visited = {}
parent = {}

$flag = true
$visit_count = 0

def dfs(edges, i, visited, parent)
  visited[i] = true
  $visit_count += 1
  edges[i].each do |edge|
    if(visited[edge] == false)
      parent[edge] = i
      dfs(edges, edge, visited, parent)
    elsif(parent[i] != edge) 
      # Cycle exists
      $flag = false
    end
  end
end

n, m = gets.chomp.split(' ').map(&:to_i)

if m != n-1
  puts "NO"
else
  edges = {}

  (1..n).each do |index|
    edges[index] = []
    visited[index] = false
  end

  (1..m).each do
    u, v = gets.chomp.split(' ').map(&:to_i)
    edges[u].push(v)
    edges[v].push(u)
  end

  parent[1] = -1
  dfs(edges, 1, visited, parent)

  if($flag == false || $visit_count != n)
    puts "NO"
  else
    puts "YES"
  end
end
