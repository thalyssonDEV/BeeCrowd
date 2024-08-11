def main():
  casos_teste = int(input())

  for _ in range(casos_teste):
    base,expoente = map(int,input().split())

    resultado = base ** expoente

    print(len(str(resultado)))
 
main()
