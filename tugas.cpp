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
