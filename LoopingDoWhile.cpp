#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;
    srand (time(0)); // Seed untuk menghasilkan angka acak

    //Perulangan dengan DO.. WHILE (Minimal 1x dikerjakan)
    cout << "PERULANGAN DO.. WHILE" << endl;
    //Nilai awal x = 1
    x = 1 + rand() % 10; // Menghasilkan angka acak antara 1 hingga 10

    do {
        cout << "TI, Bilangan acak = " << x << endl;
        x = 1 + rand() % 10; // Pengubah dari nilai x
    } while (x <= 5); //Syarat 

    cout << "Bilangan acak do-while yang terakhir = " << x << endl; // Menampilkan nilai terakhir dari x
    cout << endl;

    return 0;
}