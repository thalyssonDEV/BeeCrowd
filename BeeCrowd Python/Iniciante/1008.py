def main():
    numero = int(input())
    horas = int(input())
    recebe = float(input())
    
    salario = horas * recebe
    
    print(f'NUMBER = {numero}')
    print(f'SALARY = U$ {salario:.2f}')

main()
