class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def __init__(self):
        self.start = None
        self.rear = None

    def create_new_node(self, n):
        new_node = Node(n)
        return new_node

    def insert_node(self, new_node):
        if self.start is None:
            self.start = new_node
            self.rear = new_node
        else:
            new_node.prev = self.rear
            self.rear.next = new_node
            self.rear = new_node

    def traverse_forward(self):
        print("Traversal maju: ", end="")
        current = self.start
        while current is not None:
            print(current.data, end=" ")
            current = current.next
        print()

    def traverse_backward(self):
        print("Traversal mundur: ", end="")
        current = self.rear
        while current is not None:
            print(current.data, end=" ")
            current = current.prev
        print()


def main():
    dll = DoublyLinkedList()
    choice = 'y'
    while choice.lower() == 'y':
        try:
            c = int(input("Nilai baru = "))
        except ValueError:
            print("Masukkan angka yang valid!")
            continue
        print("Membuat node baru")
        new_node = dll.create_new_node(c)
        if new_node is not None:
            print("Berhasil membuat node baru")
        else:
            print("Node baru tidak dapat dibuat")
            break
        dll.insert_node(new_node)
        print("Node dimasukkan ke list")
        choice = input("Mau membuat node baru? (y/n) ")
    print("1. Maju")
    print("2. Mundur")
    try:
        direction = int(input("Arah traversal yang mana? "))
    except ValueError:
        direction = 1
    if direction == 1:
        dll.traverse_forward()
    elif direction == 2:
        dll.traverse_backward()
    else:
        print("Pilihan tidak valid, melakukan traversal maju")
        dll.traverse_forward()
    print("Program selesai.")


if __name__ == "__main__":
    main()
