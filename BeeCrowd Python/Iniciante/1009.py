def main():
    nome = input()
    salario_fixo = float(input())
    vendas = float(input())
    
    comissao = vendas * 0.15
    montante = salario_fixo + comissao
    
    print(f"TOTAL = R$ {montante:.2f}")

main()
