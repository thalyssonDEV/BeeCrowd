def main():
    qtd_anoes,distancia = map(int,input().split())

    distancia_final = distancia / (qtd_anoes + 2)

    print(f"{distancia_final:.2f}")

main()
