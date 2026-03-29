class Vector:
    def __init__(self):
        self.capacity = 2
        self.length = 0
        self.data = [None] * self.capacity

    def resize(self, new_capacity):
        new_data = [None] * new_capacity
        for i in range(self.length):
            new_data[i] = self.data[i]
        self.data = new_data
        self.capacity = new_capacity

    def push_back(self, value):
        if self.length == self.capacity:
            self.resize(self.capacity * 2)
        self.data[self.length] = value
        self.length += 1

    def pop_back(self):
        if self.length > 0:
            self.length -= 1

    def get(self, index):
        if 0 <= index < self.length:
            return self.data[index]
        return -1

    def set(self, index, value):
        if 0 <= index < self.length:
            self.data[index] = value

    def size(self):
        return self.length

    def display(self):
        elements = [str(self.data[i]) for i in range(self.length)]
        print("[" + ", ".join(elements) + "]")

    def clear(self):
        self.data = None
        self.capacity = 0
        self.length = 0


def main():
    v = Vector()
    v.push_back(10)
    v.push_back(20)
    v.push_back(30)
    print("Isi vector: ", end="")
    v.display()
    print(f"Elemen ke-1 = {v.get(1)}")
    v.set(1, 99)
    print("Set elemen ke-1 jadi 99: ", end="")
    v.display()
    v.pop_back()
    print("Setelah pop_back: ", end="")
    v.display()
    print(f"Ukuran vector sekarang = {v.size()}")
    v.clear()
    print("Vector telah dibersihkan.")


if __name__ == "__main__":
    main()
