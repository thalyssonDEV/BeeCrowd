def main():
    a,b,c = input().split( )
    a = int(a)
    b = int(b)
    c = int(c)
    
    maior_ab = int((a+b+abs(a-b)) / 2)
    
    if maior_ab > c:
        MAIOR = maior_ab
    else:
        MAIOR = c
    
    print(f'{MAIOR} eh o maior')

main()
