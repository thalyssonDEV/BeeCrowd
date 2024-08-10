def adicionar_numeros(numero_inicial,numero_final,sequencia_numerica):
  valores_increment = numero_inicial
  while valores_increment <= numero_final:
    sequencia_numerica += str(valores_increment)
    valores_increment += 1

  valores_decrement = numero_final
  while valores_decrement >= numero_inicial:
    valores_decrement_str = str(valores_decrement)
    numero_invertido = valores_decrement_str[::-1]
    sequencia_numerica += numero_invertido
    valores_decrement -= 1

  return sequencia_numerica

def main():
  casos_teste = int(input())

  for _ in range(casos_teste):
    num_1,num_2 = map(int,input().split())

    sequencia_numerica = ""
    numero_inicial = num_1
    numero_final = num_2
    resultado = adicionar_numeros(numero_inicial,numero_final,sequencia_numerica)

    print(resultado)

main()
