#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void setData(double pD1, double pD2, double pSisi) {
        d1 = pD1;
        d2 = pD2;
        sisi = pSisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }

    void tampilkan() {
        cout << "===== Belah Ketupat =====" << endl;
        cout << "Luas     : " << hitungLuas() << endl;
        cout << "Keliling : " << hitungKeliling() << endl << endl;
    }
};

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void setData(double pD1, double pD2, double pS1, double pS2) {
        d1 = pD1;
        d2 = pD2;
        s1 = pS1;
        s2 = pS2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 2 * (s1 + s2);
    }

    void tampilkan() {
        cout << "===== Layang-Layang =====" << endl;
        cout << "Luas     : " << hitungLuas() << endl;
        cout << "Keliling : " << hitungKeliling() << endl << endl;
    }
};

int main() {
    // Menggunakan Object BelahKetupat
    BelahKetupat bk;
    bk.setData(10, 12, 7); // d1, d2, sisi
    bk.tampilkan();

    // Menggunakan Object LayangLayang
    LayangLayang ll;
    ll.setData(15, 20, 10, 13); // d1, d2, s1, s2
    ll.tampilkan();

    return 0;
}