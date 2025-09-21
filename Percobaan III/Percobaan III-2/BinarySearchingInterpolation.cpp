#include <iostream> 
using namespace std;

int main(){
const int n = 12;
int data[n] = {5, 12, 19, 23, 31, 37, 45, 52, 68, 74, 89, 95};
int low = 0;
int high = n - 1; 
int pos;
int target;
cout << "Masukkan nilai yang ingin dicari" << endl;
cin >> target;

while(target > data[low] && target <= data[high]) {
    pos = (target-data[low])/(data[high]-data[low]) * (high-low) + low; cout << pos << endl;
    if(target > data[pos]) {
        low = pos+1;
    }
    else if (target < data[pos]) {
        high = pos-1;
    }
    else {
    low = pos;
    }
}

if(target == data[low]) {
    cout << "Ketemu pada pencarian ke " << low+1 << endl;
}
else {
    cout << "Tidak ketemu" << endl; return 0;
}
}