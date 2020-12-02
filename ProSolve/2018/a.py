a = input().split()
a = [int(x) for x in a]
n = int(input())
pair = []

for ix, x in enumerate(a):
  for iy, y in enumerate(a):
    if ix < iy and abs(x - y) == n:
      pair.append((x, y))

if len(pair) > 0:
  print("Pair Found: ", end='')
  pair = [f'({i}, {j})' for i, j in pair]
  print(', '.join(pair))
else:
  print("No Pair Found")
