def menu():
    print("1. Tampilkan address array")
    print("2. Tampilkan address dari semua index array")
    print("3. Masukkan nilai kedalam semua index array")
    print("4. Keluar")


def main():
    b = [[0 for _ in range(2)] for _ in range(3)]
    running = True
    while running:
        menu()
        try:
            choice = int(input("Pilihan: "))
        except ValueError:
            print("Masukkan angka yang valid!")
            continue
        if choice == 1:
            print(f"Address array: {id(b)}")
        elif choice == 2:
            for i in range(3):
                for j in range(2):
                    print(f"Address b[{i}][{j}]: {id(b[i][j])}")
        elif choice == 3:
            print("Masukkan nilai untuk array 3x2:")
            for i in range(3):
                for j in range(2):
                    while True:
                        try:
                            b[i][j] = int(input(f"b[{i}][{j}] = "))
                            break
                        except ValueError:
                            print("Input tidak valid, silakan masukkan angka!")
            print("Array sekarang:")
            for row in b:
                print(row)
        elif choice == 4:
            running = False
            print("Program selesai.")
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
