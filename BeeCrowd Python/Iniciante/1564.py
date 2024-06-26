def main():
    while True:
        try:
            reclamaçoes = int(input())
            if reclamaçoes == 0:
                print("vai ter copa!")
            else:
                print("vai ter duas!")
        except EOFError:
            break

main()
