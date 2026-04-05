def sequential_search_sentinel(data, n, target):
    data.append(target)
    i = 0
    while data[i] != target:
        i += 1
    data.pop()
    if i < n:
        return True, i
    else:
        return False, -1


def main():
    data = [3, 8, 1, 9, 0, 6, 7, 5, 12, 2]
    n = len(data)
    print(f"Data array: {data}")
    while True:
        try:
            target = int(input("Masukkan angka yang ingin dicari: "))
            break
        except ValueError:
            print("Input tidak valid, silakan masukkan angka!")
    found, index = sequential_search_sentinel(data, n, target)
    if found:
        print(f"Ditemukan pada indeks ke-{index}")
    else:
        print("Tidak ditemukan")


if __name__ == "__main__":
    main()
