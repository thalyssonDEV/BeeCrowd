def retornar_quantidade_letras(qtd_a):
  somatorio_a = ""
  for _ in range(qtd_a):
    somatorio_a += "a"

  return somatorio_a

def main():
  qtd_a = int(input())

  resultado_a = retornar_quantidade_letras(qtd_a)

  print(f"Feliz nat{resultado_a}l!")

main()
