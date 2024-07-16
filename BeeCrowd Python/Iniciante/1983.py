def main():
    qtd_alunos = int(input())

    maior_matricula = 0
    maior_nota = 0

    for x in range(qtd_alunos):
        num_matricula, nota = map(float, input().split())
        
        if nota >= 8:
            if nota > maior_nota:
                maior_nota = nota
                maior_matricula = int(num_matricula)
    
    if maior_nota < 8:
        print("Minimum note not reached")
    else:
        print(maior_matricula)

main()
