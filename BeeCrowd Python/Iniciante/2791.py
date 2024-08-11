def retornar_resultado(c1,c2,c3,c4):
  if c1 == 1:
    return 1
  elif c2 == 1:
    return 2
  elif c3 == 1:
    return 3
  else:
    return 4
  
def main():
  c1,c2,c3,c4 = map(int,input().split())
  
  resultado = retornar_resultado(c1,c2,c3,c4)
  
  print(resultado)

main()
