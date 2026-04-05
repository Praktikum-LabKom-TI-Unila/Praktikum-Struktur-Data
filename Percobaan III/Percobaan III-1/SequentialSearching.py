def sequential_search(data, n, target):
    i = 0
    counter = 0
    while i < n:
        if data[i] == target:
            counter += 1
        i += 1
    return counter


def main():
    data = [3, 8, 1, 9, 0, 6, 7, 5, 2, 2, 1, 6, 2, 5, 12]
    n = len(data)
    print(f"Data array: {data}")
    while True:
        try:
            target = int(input("Masukkan angka yang ingin dicari: "))
            break
        except ValueError:
            print("Input tidak valid, silakan masukkan angka!")
    counter = sequential_search(data, n, target)
    if counter > 0:
        print(f"Angka {target} ditemukan sebanyak {counter} kali.")
    else:
        print(f"Angka {target} tidak ditemukan.")


if __name__ == "__main__":
    main()
