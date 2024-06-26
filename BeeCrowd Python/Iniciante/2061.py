def main():
  abas_iniciais,numero_acoes = map(int,input().split())
  abas = abas_iniciais

  for x in range(0,numero_acoes):
    acao = str(input())

    if acao == "fechou":
      abas += 1
    elif acao == "clicou":
      abas -= 1

  print(abas)

main()
