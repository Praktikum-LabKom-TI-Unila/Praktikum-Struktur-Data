def menu():
    print("1. Tampilkan address array")
    print("2. Tampilkan address dari semua index array")
    print("3. Masukkan nilai kedalam semua index array")
    print("4. Keluar")


def main():
    a = [0] * 5
    running = True
    while running:
        menu()
        try:
            choice = int(input("Pilihan: "))
        except ValueError:
            print("Masukkan angka yang valid!")
            continue
        if choice == 1:
            print(f"Address array: {id(a)}")
        elif choice == 2:
            for i in range(5):
                print(f"Address a[{i}]: {id(a[i])}")
        elif choice == 3:
            print("Masukkan 5 nilai:")
            for i in range(5):
                try:
                    a[i] = int(input(f"a[{i}] = "))
                except ValueError:
                    print("Masukkan angka yang valid!")
                    a[i] = 0
            print(f"Array sekarang: {a}")
        elif choice == 4:
            running = False
            print("Program selesai.")
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
