def main():
    num_1 = int(input())
    num_2 = int(input())

    menor = min(num_1,num_2) + 1
    maior = max(num_1,num_2) - 1

    soma_impares = 0
    for x in range(menor,maior + 1):
        
        if x % 2 != 0:
            soma_impares += x

    print(soma_impares)

main()
