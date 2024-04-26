def main():
    tempo = int(input())
    vel_media = int(input())

    qtd_litros = (tempo*vel_media) / 12

    print(f"{qtd_litros:.3f}")

main()
