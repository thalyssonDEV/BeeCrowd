def verificar_caracteres(soma_string,resultado):
  for digits in soma_string:
    if digits == "0":
      continue
    else:
      resultado += digits
  return resultado

def main():
  while True:
    num_1,num_2 = map(int,input().split())

    if num_1 == 0 and num_2 == 0:
      break
    else:
      resultado = ""
      soma_string = str(num_1 + num_2)
      resultado_final = verificar_caracteres(soma_string,resultado)

      print(resultado_final)

main()
