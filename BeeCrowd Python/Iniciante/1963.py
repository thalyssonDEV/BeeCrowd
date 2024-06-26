def main():
    A,B = list(map(float,input().split()))
    aumento = ((B - A) / A) * 100

    print(f'{aumento:.2f}%')

main()
