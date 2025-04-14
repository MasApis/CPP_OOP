#include <iostream>
#include <cmath>
using namespace std;

// Class Persegi
class Persegi {
private:
    double sisi; // Properti private (enkapsulasi)
    double luas;
public:
    Persegi() : sisi(0), luas(0) { // Constructor
        cout << "Objek Persegi dibuat.\n";
    }
    void input() {
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;
    }
    void hitungLuas() {
        luas = sisi * sisi;
    }
    void tampilkanLuas() const {
        cout << "Luas Persegi: " << luas << endl;
    }
    ~Persegi() { // Destructor
        cout << "Objek Persegi dihapus.\n";
    }
};

// Class PersegiPanjang
class PersegiPanjang {
private:
    double panjang, lebar; // Properti private (enkapsulasi)
    double luas;
public:
    PersegiPanjang() : panjang(0), lebar(0), luas(0) { // Constructor
        cout << "Objek Persegi Panjang dibuat.\n";
    }
    void input() {
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
    }
    void hitungLuas() {
        luas = panjang * lebar;
    }
    void tampilkanLuas() const {
        cout << "Luas Persegi Panjang: " << luas << endl;
    }
    ~PersegiPanjang() { // Destructor
        cout << "Objek Persegi Panjang dihapus.\n";
    }
};

// Class Segitiga
class Segitiga {
private:
    double alas, tinggi; // Properti private (enkapsulasi)
    double luas;
public:
    Segitiga() : alas(0), tinggi(0), luas(0) { // Constructor
        cout << "Objek Segitiga dibuat.\n";
    }
    void input() {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
    }
    void hitungLuas() {
        luas = 0.5 * alas * tinggi;
    }
    void tampilkanLuas() const {
        cout << "Luas Segitiga: " << luas << endl;
    }
    ~Segitiga() { // Destructor
        cout << "Objek Segitiga dihapus.\n";
    }
};

// Class Lingkaran
class Lingkaran {
private:
    double jariJari; // Properti private (enkapsulasi)
    double luas;
public:
    Lingkaran() : jariJari(0), luas(0) { // Constructor
        cout << "Objek Lingkaran dibuat.\n";
    }
    void input() {
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jariJari;
    }
    void hitungLuas() {
        luas = M_PI * jariJari * jariJari;
    }
    void tampilkanLuas() const {
        cout << "Luas Lingkaran: " << luas << endl;
    }
    ~Lingkaran() { // Destructor
        cout << "Objek Lingkaran dihapus.\n";
    }
};

int main() {
    short pilihan;

    while (true)
    {
        cout << endl;
        cout << "=== Kalkulator Bangun Datar ===" << endl;
        cout << "Pilih bangun datar yang ingin dihitung:" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        if (pilihan == 1) {
            Persegi persegi;
            persegi.input();
            persegi.hitungLuas();
            persegi.tampilkanLuas();
        } else if (pilihan == 2) {
            PersegiPanjang persegiPanjang;
            persegiPanjang.input();
            persegiPanjang.hitungLuas();
            persegiPanjang.tampilkanLuas();
        } else if (pilihan == 3) {
            Segitiga segitiga;
            segitiga.input();
            segitiga.hitungLuas();
            segitiga.tampilkanLuas();
        } else if (pilihan == 4) {
            Lingkaran lingkaran;
            lingkaran.input();
            lingkaran.hitungLuas();
            lingkaran.tampilkanLuas();
        } else if (pilihan == 5) {
            cout << "Terimakasih sudah menggunakan program kami" << endl;
            cout << "Creator : masapistech" << endl;
            cout << "Creator : Rauf Hidayat" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    cout << endl;
    
    return 0;
}
