import sys
import math

t = int(sys.stdin.readline().rstrip())
print t
for x in xrange(t):
  n = long(sys.stdin.readline().rstrip())
  if n == 0 or n == 1 :
    print "1"
  else :
    print long(math.ceil(math.log10(2 * math.pi * n)/2.0 + n * math.log10(n/math.e)))
