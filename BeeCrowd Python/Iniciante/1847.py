def verificar_figura(A,B,C):
    if B < A and C >= B:
        print(":)")
    elif B > A and C <= B:
        print(":(")
    elif (B > A and C > B) and (abs(B-C) < abs(A-B)):
        print(":(")
    elif B > A and C > B and (abs(B-C) >= abs(A-B)):
        print(":)")
    elif B < A and C < B and (abs(B-C) < abs(A-B)):
        print(":)")
    elif (B < A and C < B) and (abs(B-C) >= abs(A-B)):
        print(":(")
    elif A == B:
        if C > B:
            print(":)")
        else:
            print(":(")
         
def main():
    A,B,C = map(int,input().split())

    verificar_figura(A,B,C)

main()
