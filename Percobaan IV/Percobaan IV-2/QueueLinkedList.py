class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class QueueLinkedList:
    def __init__(self):
        self.front_ptr = None
        self.rear_ptr = None

    def is_empty(self):
        return self.front_ptr is None

    def enqueue(self, x):
        new_node = Node(x)
        if self.is_empty():
            self.front_ptr = new_node
            self.rear_ptr = new_node
        else:
            self.rear_ptr.next = new_node
            self.rear_ptr = new_node
        print(f"Enqueue {x} berhasil")

    def dequeue(self):
        if self.is_empty():
            print("Queue kosong")
            return
        temp = self.front_ptr
        print(f"Dequeue {temp.data} berhasil")
        self.front_ptr = self.front_ptr.next
        if self.front_ptr is None:
            self.rear_ptr = None

    def peek(self):
        if self.is_empty():
            print("Queue kosong")
            return
        print(f"Elemen depan: {self.front_ptr.data}")

    def display(self):
        if self.is_empty():
            print("Queue kosong")
            return
        print("Isi queue (depan ke belakang): ", end="")
        current = self.front_ptr
        while current is not None:
            print(current.data, end=" ")
            current = current.next
        print()


def main():
    queue = QueueLinkedList()
    pilih = 0
    while pilih != 5:
        print("\n=== QUEUE (Linked List) ===")
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
            while not queue.is_empty():
                queue.dequeue()
            print("Program selesai.")
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
