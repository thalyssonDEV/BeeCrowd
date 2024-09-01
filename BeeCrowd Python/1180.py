def get_smaller_and_position(vetor):
    menor = vetor[0]
    posicao_menor = 0
    index = 0

    for value in vetor:
        
        if value < menor:
            menor = value
            posicao_menor = index
        
        index += 1
    
    return menor, posicao_menor

def main():
    tamanho = int(input().strip())
    vetor = list(map(int, input().strip().split()))

    menor, posicao_menor = get_smaller_and_position(vetor)

    print(f"Menor valor: {menor}")
    print(f"Posicao: {posicao_menor}")

main()
