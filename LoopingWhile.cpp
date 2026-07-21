#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;
    srand(time(0)); // Seed untuk menghasilkan angka acak

    // Perulangan dengan WHILE 
    cout << "PERULANGAN WHILE" << endl;
    //Nilai awal x = 1
    x = 1 + rand() % 10; // Menghasilkan angka acak antara 1 hingga 10

    while (x <= 5) {
        cout << "TI, Bilangan acak = " << x << endl;
        x = 1 + rand() % 10; // Pengubah dari nilai x
    }

    