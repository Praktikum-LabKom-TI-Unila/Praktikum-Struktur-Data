def interpolation_search(data, n, target):
    low = 0
    high = n - 1
    while target >= data[low] and target <= data[high] and low <= high:
        if data[high] == data[low]:
            if data[low] == target:
                return low
            break
        pos = low + int(((target - data[low]) / (data[high] - data[low])) * (high - low))
        print(f"Posisi estimasi: {pos}, nilai: {data[pos]}")
        if target > data[pos]:
            low = pos + 1
        elif target < data[pos]:
            high = pos - 1
        else:
            return pos
    if low < n and data[low] == target:
        return low
    return -1


def main():
    data = [5, 12, 19, 23, 31, 37, 45, 52, 68, 74, 89, 95]
    n = len(data)
    print(f"Data array: {data}")
    try:
        target = int(input("Masukkan nilai yang ingin dicari: "))
    except ValueError:
        print("Input tidak valid!")
        return
    pos = interpolation_search(data, n, target)
    if pos != -1:
        print(f"Ketemu pada indeks ke-{pos}")
    else:
        print("Tidak ketemu")


if __name__ == "__main__":
    main()
