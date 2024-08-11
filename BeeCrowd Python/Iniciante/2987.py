def posicao_letra(L):
  return ord(L) - ord('A') + 1

def main():
  L = str(input())
  resultado = posicao_letra(L)
  print(resultado)

main()
