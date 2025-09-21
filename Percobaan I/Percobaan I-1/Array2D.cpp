#include <iostream>
using namespace std;
void menu () {
    cout << "1. Tampilkan address array \n";
    cout << "2. Tampilkan address dari semua index array \n";
    cout << "3. Masukkan nilai kedalam semua index array \n";
    cout << "4. Keluar \n";
}
int main () {
    int b[3][2];
    int choice;
    bool running = true;
    while (running) {
        menu ();
        cin >> choice;
        switch (choice) {
            case 1 :
                cout << &b << endl;
                break;
            case 2 :
                for (int i=0; i<3; i++){
                    for (int j=0; j < 2; j++){
                        cout << &b[i][j] << endl;
                    }
                }
                break;
            case 3 : 
                for (int i =0; i<3; i++) {
                    for (int j=0; j < 2; j++){
                        cin >> b[i][j];
                    }
                }
                    break;
            case 4 :
                running = false;
                return 0;
        }
    }
}
