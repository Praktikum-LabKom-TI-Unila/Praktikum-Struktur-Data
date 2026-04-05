def tukar(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp


def selection_sort(arr, n):
    for i in range(n - 1):
        pos = i
        for j in range(i + 1, n):
            if arr[j] < arr[pos]:
                pos = j
        if pos != i:
            tukar(arr, i, pos)


def main():
    try:
        n = int(input("Masukkan jumlah elemen: "))
    except ValueError:
        print("Input tidak valid!")
        return
    arr = []
    print("Masukkan elemen array:")
    for i in range(n):
        while True:
            try:
                nilai = int(input())
                arr.append(nilai)
                break
            except ValueError:
                print("Input tidak valid, silakan masukkan angka!")
    print(f"Array sebelum diurutkan: {arr}")
    selection_sort(arr, n)
    print("Array setelah diurutkan (Selection Sort):", end=" ")
    for i in range(n):
        print(arr[i], end=" ")
    print()


if __name__ == "__main__":
    main()
