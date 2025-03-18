#include <iostream>
using namespace std;

int main() {
    const int h_ayam_g = 17000;
    const int h_ayam_b = 21000;
    const double DISKON = 0.10;
    const int BATAS_DISKON = 45000;
    
    int jumlahGoreng, jumlahBakar;
    cout << "Masukkan jumlah ayam goreng: ";
    cin >> jumlahGoreng;
    cout << "Masukkan jumlah ayam bakar: ";
    cin >> jumlahBakar;
    
    int totalGoreng = jumlahGoreng * h_ayam_g;
    int totalBakar = jumlahBakar * h_ayam_b;
    int totalHarga = totalGoreng + totalBakar;
    double potongan = (totalHarga > BATAS_DISKON) ? totalHarga * DISKON : 0;
    double totalBayar = totalHarga - potongan;
     
    cout << "\n========== STRUK PEMBAYARAN ==========" << endl;
    cout << "Ayam Goreng  : " << jumlahGoreng << " x Rp" << h_ayam_g << " = Rp" << totalGoreng << endl;
    cout << "Ayam Bakar   : " << jumlahBakar << " x Rp" << h_ayam_b << " = Rp" << totalBakar << endl;
    cout << "------------------------------------" << endl;
    cout << "Total Harga  : Rp" << totalHarga << endl;
    if (potongan > 0) {
        cout << "Diskon 10%   : -Rp" << potongan << endl;
    }
    cout << "Total Bayar  : Rp" << totalBayar << endl;
    cout << "=====================================" << endl;
    
    return 0;
}

