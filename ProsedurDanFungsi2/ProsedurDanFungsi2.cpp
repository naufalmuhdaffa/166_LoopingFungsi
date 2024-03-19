#include <iostream>
using namespace std;

int sisi;

void inputData() {
    cout << "Masukan nilai sisi : ";
    cin >> sisi;
}

int hitungLuas() {
    return sisi * sisi;
}

void display() {
    cout << "Luas persegi : " << hitungLuas() << endl;
}

int main()
{
    inputData();
    display();
}