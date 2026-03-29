class QueueArray:
    def __init__(self, max_size=100):
        self.MAXN = max_size
        self.q = [None] * self.MAXN
        self.front_idx = -1
        self.rear_idx = -1

    def is_empty(self):
        return self.front_idx == -1

    def is_full(self):
        return (self.rear_idx + 1) % self.MAXN == self.front_idx

    def enqueue(self, x):
        if self.is_full():
            print("Queue penuh")
            return
        if self.is_empty():
            self.front_idx = 0
            self.rear_idx = 0
        else:
            self.rear_idx = (self.rear_idx + 1) % self.MAXN
        self.q[self.rear_idx] = x
        print(f"Enqueue {x} berhasil")

    def dequeue(self):
        if self.is_empty():
            print("Queue kosong")
            return
        print(f"Dequeue {self.q[self.front_idx]} berhasil")
        if self.front_idx == self.rear_idx:
            self.front_idx = -1
            self.rear_idx = -1
        else:
            self.front_idx = (self.front_idx + 1) % self.MAXN

    def peek(self):
        if self.is_empty():
            print("Queue kosong")
            return
        print(f"Elemen depan: {self.q[self.front_idx]}")

    def display(self):
        if self.is_empty():
            print("Queue kosong")
            return
        print("Isi queue (depan ke belakang): ", end="")
        i = self.front_idx
        while True:
            print(self.q[i], end=" ")
            if i == self.rear_idx:
                break
            i = (i + 1) % self.MAXN
        print()


def main():
    queue = QueueArray()
    pilih = 0
    while pilih != 5:
        print("\n=== QUEUE (Array) ===")
        print("1. Enqueue")
        print("2. Dequeue")
        print("3. Peek")
        print("4. Tampilkan")
        print("5. Keluar")
        try:
            pilih = int(input("Pilih: "))
        except ValueError:
            print("Input tidak valid!")
            continue
        if pilih == 1:
            try:
                val = int(input("Nilai: "))
                queue.enqueue(val)
            except ValueError:
                print("Input tidak valid!")
        elif pilih == 2:
            queue.dequeue()
        elif pilih == 3:
            queue.peek()
        elif pilih == 4:
            queue.display()
        elif pilih == 5:
            print("Program selesai.")
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
