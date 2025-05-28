#include <iostream>

using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
    };

int main(){
    mahasiswa dina;
    mahasiswa* ptr = &dina;

    (*ptr).nim = "c030324017";
    (*ptr).nama = "Dina";
    (*ptr).alamat = "Jl. Kuin Selatan";
    (*ptr).ipk = 3.9;

    cout << "nim:" << (*ptr).nim << endl;
    cout << "nama:" << (*ptr).nama << endl;
    cout << "alamat:" << (*ptr).alamat << endl;
    cout << "ipk:" << (*ptr).ipk << endl;

    return 0;
}

