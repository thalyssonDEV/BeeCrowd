def main():
    distancia = int(input())
    combustivel = float(input())

    consumo_medio = distancia / combustivel

    print(f"{consumo_medio:.3f} km/l")

main()
