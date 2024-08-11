def definir_musica(soma_botoes):
  music_list = {
    0: "PROXYCITY",
    1: "P.Y.N.G.",
    2: "DNSUEY!",
    3: "SERVERS",
    4: "HOST!",
    5: "CRIPTONIZE",
    6: "OFFLINE DAY",
    7: "SALT",
    8: "ANSWER!",
    9: "RAR?",
    10: "WIFI ANTENNAS"
  }
  return music_list.get(soma_botoes,0)

def main():
  casos_teste = int(input())

  for _ in range(casos_teste):
    botao_1,botao_2 = map(int,input().split())
    soma_botoes = botao_1 + botao_2
    musica_resultado = definir_musica(soma_botoes)

    print(musica_resultado)

main()
