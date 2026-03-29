def binary_search(arr, n, target):
    l = 0
    r = n - 1
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        print(f"Median: {m}, nilai: {arr[m]}")
        if arr[m] == target:
            pos = m
            break
        elif arr[m] < target:
            print("Mencari di kanan")
            l = m + 1
        else:
            print("Mencari di kiri")
            r = m - 1
    return pos


def main():
    try:
        n = int(input("Masukkan jumlah elemen: "))
    except ValueError:
        print("Input tidak valid!")
        return
    arr = []
    print("Masukkan elemen (urut menaik):")
    for i in range(n):
        try:
            nilai = int(input())
            arr.append(nilai)
        except ValueError:
            print("Input tidak valid, menggunakan 0")
            arr.append(0)
    print(f"Array: {arr}")
    try:
        target = int(input("Masukkan angka yang ingin dicari: "))
    except ValueError:
        print("Input tidak valid!")
        return
    pos = binary_search(arr, n, target)
    if pos != -1:
        print(f"Ditemukan pada indeks ke-{pos}")
    else:
        print("Tidak ditemukan")


if __name__ == "__main__":
    main()
