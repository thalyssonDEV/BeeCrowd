def verificar_golpe_jogador1(bonus_1,ataque_1,defesa_1):
    valor_golpe_1 = ((ataque_1 + defesa_1) / 2 ) + bonus_1

    return valor_golpe_1

def verificar_golpe_jogador2(bonus_2,ataque_2,defesa_2):
    valor_golpe_2 = ((ataque_2 + defesa_2) / 2 ) + bonus_2

    return valor_golpe_2
      
def main():
    casos_teste = int(input())

    for x in range(casos_teste):
        bonus = int(input())
        ataque_1,defesa_1,level_1 = map(int,input().split())
        ataque_2,defesa_2,level_2 = map(int,input().split())

        if level_1 % 2 == 0:
            bonus_1 = bonus
        else:
            bonus_1 = 0

        if level_2 % 2 == 0:
            bonus_2 = bonus
        else:
            bonus_2 = 0

        valor_golpe_1 = verificar_golpe_jogador1(bonus_1,ataque_1,defesa_1)
        valor_golpe_2 = verificar_golpe_jogador2(bonus_2,ataque_2,defesa_2)

        if valor_golpe_1 > valor_golpe_2:
            print("Dabriel")
        elif valor_golpe_2 > valor_golpe_1:
            print("Guarte")
        else:
            print("Empate")

main()
