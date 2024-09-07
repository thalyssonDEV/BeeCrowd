def remover_digito_falho(digito_falho, numero_negociado):
  
  numero_real = ""
  for char in numero_negociado:

    if char != digito_falho:
      numero_real += char

  if numero_real == "":
    return "0"

  return (str(int(numero_real)))


def main():
  while True:
    digito_falho, numero_negociado = map(str, input().split())

    if digito_falho == "0" and numero_negociado == "0":
      break

    resultado = remover_digito_falho(digito_falho, numero_negociado)

    print(resultado)

main()
