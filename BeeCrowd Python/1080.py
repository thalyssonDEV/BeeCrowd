def main():
    
    maior = 0
    posicao = posicao_maior = 1
    for _ in range(100):
        valor = int(input())

        if valor > maior:
            maior = valor
            posicao_maior = posicao

        posicao += 1

    print(f"""{maior}
{posicao_maior}""")

main()
