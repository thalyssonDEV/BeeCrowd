def main():
    a,b,c = input().split( )
    a = float(a)
    b = float(b)
    c = float(c)

    delta = (b**2) - 4 * a * c
    if delta < 0 or a == 0:
        print("Impossivel calcular")
    else:
        r1 = (-b + (delta**0.5)) / (2*a)
        r2 = (-b - (delta**0.5)) / (2*a)

        print(f"""R1 = {r1:.5f}
R2 = {r2:.5f}""")

main()
