def conferir_combustivel(opcoes):
    global alcool,gasolina,diesel
  
    if opcoes == 1:
        alcool += 1
    elif opcoes == 2:
        gasolina += 1
    elif (opcoes == 3):
        diesel += 1
      
def main():
    global alcool,gasolina,diesel
  
    alcool = 0
    gasolina = 0
    diesel = 0
  
    while True:
        opcoes = int(input())

        if (opcoes == 4):
          break
        elif opcoes == 1 or opcoes == 2 or opcoes == 3:
          conferir_combustivel(opcoes)
          
    print("MUITO OBRIGADO")
    print(f"Alcool: {alcool}")
    print(f"Gasolina: {gasolina}")
    print(f"Diesel: {diesel}")
    
main()
