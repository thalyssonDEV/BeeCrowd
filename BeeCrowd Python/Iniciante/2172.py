def main():
    while True:
        x,experiencia = list(map(int,input().split()))
        
        if x == 0 and experiencia == 0:
            break
        else:
            aumento = x * experiencia
            print(f'{aumento}')
   
main()
