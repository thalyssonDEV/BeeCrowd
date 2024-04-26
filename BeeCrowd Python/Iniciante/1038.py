def main():
    item,qtd = input().split( )
    item = int(item)
    qtd = int(qtd)

    if item == 1:
        preço = 4
    if item == 2:
        preço = 4.5
    if item == 3:
        preço = 5
    if item == 4:
        preço = 2
    if item == 5:
        preço = 1.5
    
    valor_total = preço * qtd

    print(f"Total: R$ {valor_total:.2f}")

main()
