def retornar_valor_item(codigo_item,quantidade):
  tabela = {
    1: 4,
    2: 4.5,
    3: 5,
    4: 2,
    5: 1.5
  }
  valor_final = tabela.get(codigo_item) * quantidade
  return valor_final

def main():
  codigo_item,quantidade = map(int,input().split())
  valor_item = retornar_valor_item(codigo_item,quantidade)
  print(f"Total: R$ {valor_item:.2f}")

main()
