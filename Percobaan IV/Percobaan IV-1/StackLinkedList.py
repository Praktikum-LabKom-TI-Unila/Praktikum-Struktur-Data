class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class StackLinkedList:
    def __init__(self):
        self.top_ptr = None

    def is_empty(self):
        return self.top_ptr is None

    def push(self, x):
        new_node = Node(x)
        new_node.next = self.top_ptr
        self.top_ptr = new_node
        print(f"Push {x} berhasil")

    def pop(self):
        if self.is_empty():
            print("Stack kosong")
            return
        temp = self.top_ptr
        print(f"Pop {temp.data} berhasil")
        self.top_ptr = self.top_ptr.next

    def peek(self):
        if self.is_empty():
            print("Stack kosong")
            return
        print(f"Elemen teratas: {self.top_ptr.data}")

    def display(self):
        if self.is_empty():
            print("Stack kosong")
            return
        print("Isi stack (atas ke bawah): ", end="")
        current = self.top_ptr
        while current is not None:
            print(current.data, end=" ")
            current = current.next
        print()


def main():
    stack = StackLinkedList()
    pilih = 0
    while pilih != 5:
        print("\n=== STACK (Linked List) ===")
        print("1. Push")
        print("2. Pop")
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
                stack.push(val)
            except ValueError:
                print("Input tidak valid!")
        elif pilih == 2:
            stack.pop()
        elif pilih == 3:
            stack.peek()
        elif pilih == 4:
            stack.display()
        elif pilih == 5:
            while not stack.is_empty():
                stack.pop()
            print("Program selesai.")
        else:
            print("Pilihan tidak valid!")


if __name__ == "__main__":
    main()
