#include <iostream>
using namespace std;

int panjang, lebar;

void inputData() {
    cout << "Masukan Nilai Panjang : ";
    cin >> panjang;
    cout << "Masukan Nilai Lebar : ";
    cin >> lebar;
}
int hitungLuas() {
    return panjang * lebar;
}
void luas() {
    cout << "luasnya adalah : " << hitungLuas() << endl;
}

int main()
{
    inputData();
    hitungLuas();
    luas();
}