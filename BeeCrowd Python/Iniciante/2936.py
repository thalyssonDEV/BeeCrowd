def retornar_quantidade_gramas(curupira,boi_tata,boto,mapinguari,lara):
  quantidade_gramas = (curupira * 300) + (boi_tata * 1500) + (boto * 600) + (mapinguari * 1000) + (lara * 150) + 225

  return quantidade_gramas

def main():
  curupira = int(input())
  boi_tata = int(input())
  boto = int(input())
  mapinguari = int(input())
  lara = int(input())
  
  resultado_gramas = retornar_quantidade_gramas(curupira,boi_tata,boto,mapinguari,lara)

  print(resultado_gramas)
  
main()
