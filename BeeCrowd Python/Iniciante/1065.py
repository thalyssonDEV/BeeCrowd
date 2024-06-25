def main():
    i = 0
    pares = 0
    while i < 5:
      numeros = int(input())
      i += 1
      if abs(numeros) % 2 == 0:
        pares += 1
    print(f'{pares} valores pares')

main()
