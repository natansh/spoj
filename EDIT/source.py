#!/usr/bin/python

def min_dist(m):
    length = len(m)
    capital = [0] * (length + 1)
    non_capital = capital[:]
    
    for i in range(length-1, -1, -1):
        capital[i] = non_capital[i+1] + (0 if m[i].isupper() else 1)
        non_capital[i] = capital[i+1] + (1 if m[i].isupper() else 0)

    return min(capital[0], non_capital[0])

def main():
    while True:
        try:
            m = raw_input()
            print str(min_dist(m))
        except EOFError:
            break

if __name__ == "__main__":
    main()
