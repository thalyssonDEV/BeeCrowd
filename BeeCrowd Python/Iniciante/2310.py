def retornar_porcentagem_saques(soma_saques_certos,soma_saques):
  porcentagem_saques = (soma_saques_certos / soma_saques) * 100

  return porcentagem_saques

def retornar_porcentagem_bloqueios(soma_bloqueios,soma_bloqueios_certos):
  porcentagem_bloqueios = (soma_bloqueios_certos / soma_bloqueios) * 100

  return porcentagem_bloqueios

def retornar_porcentagem_ataques(soma_ataques,soma_ataques_certos):
  porcentagem_ataques = (soma_ataques_certos / soma_ataques) * 100

  return porcentagem_ataques
  
def main():
  numero_jogadores = int(input())
  
  soma_saques = 0
  soma_saques_certos = 0
  soma_bloqueios = 0
  soma_bloqueios_certos = 0
  soma_ataques = 0
  soma_ataques_certos = 0
  for _ in range(numero_jogadores):
    nome = str(input())
    saques,bloqueios,ataques = map(int,input().split())
    saques_certos,bloqueios_certos,ataques_certos = map(int,input().split())

    soma_saques += saques
    soma_bloqueios += bloqueios
    soma_ataques += ataques
    soma_saques_certos += saques_certos
    soma_bloqueios_certos += bloqueios_certos
    soma_ataques_certos += ataques_certos

  pontos_saques = retornar_porcentagem_saques(soma_saques_certos,soma_saques)
  pontos_bloqueios = retornar_porcentagem_bloqueios(soma_bloqueios,soma_bloqueios_certos)
  pontos_ataques = retornar_porcentagem_ataques(soma_ataques,soma_ataques_certos) 
    
  print(f"""Pontos de Saque: {pontos_saques:.2f} %.
Pontos de Bloqueio: {pontos_bloqueios:.2f} %.
Pontos de Ataque: {pontos_ataques:.2f} %.""")
                                            
main()
