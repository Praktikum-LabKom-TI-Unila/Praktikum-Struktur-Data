def tukar(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp


def bubble_sort(arr, n):
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                tukar(arr, j, j + 1)


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
    bubble_sort(arr, n)
    print("Array setelah diurutkan (Bubble Sort):", end=" ")
    for i in range(n):
        print(arr[i], end=" ")
    print()


if __name__ == "__main__":
    main()
