#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
} *start, *newptr, *save, *ptr, *rear;

node *create_new_node(int);
void insert_at_beg(node *);
void insert_at_end(node *);
void display(node *);
void delete_node();

int main() {
    start = rear = NULL;
    int c;
    char choice = 'y';
    int insert;
    while (choice == 'y' || choice == 'Y') {
        cout << "Nilai baru = ";
        cin >> c;
        cout << "Membuat node baru" << endl;
        newptr = create_new_node(c);
        if(newptr != NULL) {
            cout << "Berhasil membuat node baru" << endl;
        }
        else {
            cout << "Node baru tidak dapat dibuat";
            exit(1);
        }
        cout << "1. Depan \n";
        cout << "2. Belakang \n";
        cout << "Masukkan dimana ?";
        cin >> insert;
        switch (insert) {
            case 1 :
            insert_at_beg(newptr);
            cout << "Node dimasukkan di awal list" << endl;
            break;
            case 2 :
            insert_at_end(newptr);
            cout << "Node dimasukkan di akhir list" << endl;
            break;
        }
        cout << "List :";
        display(start);
        cout << "Mau membuat node baru? (y/n)";
        cin >> choice;
    }
    do {
        cout << "List:";
        display(start);
        cout << "Mau menghapus node pertama? (y/n)";
        cin >> choice;
        if(choice == 'y' || choice == 'Y'){
            delete_node();
        }
    } while (choice== 'y' || choice == 'Y');
    return 0;
}

node *create_new_node(int n){
    ptr = new node;
    ptr->data = n;
    ptr->next = NULL;
    return ptr;
}

void insert_in_beg(node *np) {
    if(start == NULL){
        start = rear = np;
    }
    else{
        save = start;
        start = np;
        np->next = start;
    }
}
void insert_in_end(node *np) {
    if(start == NULL){
        start = rear = np;
    }
    else{
        rear->next = np;
        rear = np;
    }
}

void delete_node() {
    if(start == NULL){
        cout << "Underflow!!!" << endl;
    }
    else{
        ptr = start;
        start = start->next;
    }
}