#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 6;
    string kontak[n] = {"Andi", "Budi", "Cici", "Dodi", "Eka", "Fani"};
    string cari;
    bool ketemu = false;

    cout << "Daftar kontak teman:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << kontak[i] << endl;
    }

    cout << "\nMasukkan nama yang ingin kamu cari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (kontak[i] == cari) {
            ketemu = true;
            cout << "Teman dengan nama " << cari << " ditemukan pada posisi ke-" << i + 1 << endl;
            break;
        }
    }

    if (!ketemu)
        cout << "Teman dengan nama " << cari << " tidak ditemukan dalam daftar.\n";

    return 0;
}