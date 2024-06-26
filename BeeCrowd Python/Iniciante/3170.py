from math import floor

def main():
    amanda = int(input())
    galhos = int(input())
    
    if amanda*2 >= galhos:
        print(f'Amelia tem todas bolinhas!')
    else:    
        print(f'Faltam {floor(galhos/2) - amanda} bolinha(s)')
    
main()
