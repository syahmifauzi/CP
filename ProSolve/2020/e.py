t = int(input())

for test in range(t):
  cText = input()
  keyLen = int(input())
  recText = input()
  cText = [int(f'0x{cText[i:i+2]}', 16) for i in range(0, len(cText)-1, 2)]
  recText = [int(f'0x{recText[i:i+2]}', 16) for i in range(0, len(recText)-1, 2)]
  keys = []
  for i in range(keyLen):
    keys.append(recText[i] ^ cText[i])
  pText = []
  for i in range(len(cText)):
    pText.append(int(cText[i]) ^ int(keys[i % len(keys)]))
  res = [chr(i) for i in pText]
  print(''.join(res))
