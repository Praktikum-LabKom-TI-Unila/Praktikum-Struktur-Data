def insertion_sort(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp


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
    insertion_sort(arr, n)
    print("Array setelah diurutkan (Insertion Sort):", end=" ")
    for i in range(n):
        print(arr[i], end=" ")
    print()


if __name__ == "__main__":
    main()
