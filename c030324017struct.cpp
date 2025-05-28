#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
    };

int main(){
    mahasiswa doni;

    doni.nim = "c030324017";
    doni.nama = "Dina Arianti";
    doni.alamat = "Jl. Kuin Selatan";
    doni.ipk = 3.9;

    cout << doni.nim << "\n";
    cout << doni.nama << "\n";
    cout << doni.alamat << "\n";
    cout << doni.ipk << "\n";

    return 0;
}

