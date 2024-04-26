def main():
  code_1,num_peças_1,val_uni_1 = input().split( )
  code_2,num_peças_2,val_uni_2 = input().split( )

  num_peças_1 = int(num_peças_1)
  val_uni_1 = float(val_uni_1)
  num_peças_2 = int(num_peças_2)
  val_uni_2 = float(val_uni_2)

  valor_final = (num_peças_1 * val_uni_1) + (num_peças_2 * val_uni_2)

  print(f"VALOR A PAGAR: R$ {valor_final:.2f}")

main()
