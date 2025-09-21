#include <iostream>
using namespace std;
void menu () {
    cout << "1. Tampilkan address array \n";
    cout << "2. Tampilkan address dari semua index array \n";
    cout << "3. Masukkan nilai kedalam semua index array \n";
    cout << "4. Keluar \n";
}
int main () {
    int a[5];
    int choice;
    bool running = true;
    while (running) {
        menu ();
        cin >> choice;
        switch (choice) {
            case 1 :
                cout << &a << endl;
                break;
            case 2 :
                for (int i=0; i<5; i++){
                    cout << &a[i] << endl;
                }
                break;
            case 3 : 
                for (int i =0; i<5; i++) {
                    cin >> a[i];
                }
                    break;
            case 4 :
                running = false;
                return 0;
        }
    }
}
