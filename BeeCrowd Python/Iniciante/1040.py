def main():
    n1,n2,n3,n4 = input().split( )
    n1 = float(n1)
    n2 = float(n2)
    n3 = float(n3)
    n4 = float(n4)

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / 10
    print(f"Media: {media:.1f}")

    if media >= 7:
        print("Aluno aprovado.")
    elif media < 5:
        print("Aluno reprovado.")
    else:
        print("Aluno em exame.")
        n_exame = float(input())
        media_final = (media + n_exame) / 2
        print(f"Nota do exame: {n_exame:.1f}")

        if media_final >= 5:
            print("Aluno aprovado.")
        else:
            print("Aluno reprovado.")
        
        print(f"Media final: {media_final:.1f}")
        
main()
