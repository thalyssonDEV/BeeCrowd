def main():
  a,b,c = list(map(int,input().split()))
  lista_normal = [a,b,c]
  lista_crescente = sorted(lista_normal)
  
  for x in lista_crescente:
    print(x)

  print("")

  for x in lista_normal:
    print(x)

main()
