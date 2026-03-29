class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.start = None
        self.rear = None

    def create_new_node(self, n):
        new_node = Node(n)
        return new_node

    def insert_at_beg(self, new_node):
        if self.start is None:
            self.start = new_node
            self.rear = new_node
        else:
            new_node.next = self.start
            self.start = new_node

    def insert_at_end(self, new_node):
        if self.start is None:
            self.start = new_node
            self.rear = new_node
        else:
            self.rear.next = new_node
            self.rear = new_node

    def delete_node(self):
        if self.start is None:
            print("Underflow!!!")
        else:
            deleted_data = self.start.data
            self.start = self.start.next
            print(f"Node dengan data {deleted_data} telah dihapus.")
            if self.start is None:
                self.rear = None

    def display(self):
        if self.start is None:
            print("(kosong)")
            return
        current = self.start
        while current is not None:
            print(current.data, end=" -> ")
            current = current.next
        print("None")


def main():
    ll = LinkedList()
    choice = 'y'
    while choice.lower() == 'y':
        try:
            c = int(input("Nilai baru = "))
        except ValueError:
            print("Masukkan angka yang valid!")
            continue
        print("Membuat node baru")
        new_node = ll.create_new_node(c)
        if new_node is not None:
            print("Berhasil membuat node baru")
        else:
            print("Node baru tidak dapat dibuat")
            break
        print("1. Depan")
        print("2. Belakang")
        try:
            insert_choice = int(input("Masukkan dimana? "))
        except ValueError:
            insert_choice = 1
        if insert_choice == 1:
            ll.insert_at_beg(new_node)
            print("Node dimasukkan di awal list")
        elif insert_choice == 2:
            ll.insert_at_end(new_node)
            print("Node dimasukkan di akhir list")
        else:
            print("Pilihan tidak valid, node dimasukkan di awal")
            ll.insert_at_beg(new_node)
        print("List: ", end="")
        ll.display()
        choice = input("Mau membuat node baru? (y/n) ")
    while True:
        print("List: ", end="")
        ll.display()
        choice = input("Mau menghapus node pertama? (y/n) ")
        if choice.lower() == 'y':
            ll.delete_node()
        else:
            break
    print("Program selesai.")


if __name__ == "__main__":
    main()
