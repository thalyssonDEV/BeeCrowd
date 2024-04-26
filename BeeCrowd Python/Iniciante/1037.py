def main():
    num = float(input())

    if num < 0 or num > 100:
        print("Fora de intervalo")
    elif num >= 0 and num <= 25:
        print("Intervalo [0,25]")
    elif num <= 50:
        print("Intervalo (25,50]")
    elif num <= 75:
        print("Intervalo (50,75]")
    else:
        print("Intervalo (75,100]")
        
main()
