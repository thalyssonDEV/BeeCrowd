def main():
    A,B,C = input().split( )
    A = float(A)
    B = float(B)
    C = float(C)

    atr = (A*C) / 2
    ac = (C**2) * 3.14159
    at = ((A+B) * C) / 2
    aq = B**2
    art = A*B

    print(f"""TRIANGULO: {atr:.3f}
CIRCULO: {ac:.3f}
TRAPEZIO: {at:.3f}
QUADRADO: {aq:.3f}
RETANGULO: {art:.3f}""")

main()
