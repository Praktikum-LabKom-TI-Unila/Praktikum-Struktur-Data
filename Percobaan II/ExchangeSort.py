def tukar(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp


def exchange_sort(arr, n):
    for i in range(n - 1):
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                tukar(arr, i, j)


def main():
    try:
        n = int(input("Masukkan jumlah elemen: "))
    except ValueError:
        print("Input tidak valid!")
        return
    arr = []
    print("Masukkan elemen array:")
    for i in range(n):
        try:
            nilai = int(input())
            arr.append(nilai)
        except ValueError:
            print("Input tidak valid, menggunakan 0")
            arr.append(0)
    print(f"Array sebelum diurutkan: {arr}")
    exchange_sort(arr, n)
    print("Array setelah diurutkan (Exchange Sort):", end=" ")
    for i in range(n):
        print(arr[i], end=" ")
    print()


if __name__ == "__main__":
    main()
