#include <iostream>
using namespace std;

int main()
{
    int nilai;
    char predikat;
    string keterangan;
 
        cout << "   PROGRAM KONVERSI NILAI KE HURUF " << endl;
        cout << "=======================================" << endl;
        cout << "masukkan Nilai anda : ";
            cin >> nilai;
        cout << " " << endl;

    if (nilai > 100){
        cout << "nilai yang anda masukkan salah\n";
    }else if (nilai >= 80){
        predikat = 'A';
    }else if (nilai >= 65){
        predikat = 'B';
    }else if (nilai >= 50){
        predikat = 'C';
    }else if (nilai >= 35){
        predikat = 'D';
    }else if (nilai >= 0){
        predikat = 'E';
    }else{
        cout << "nilai yang anda masukkan salah\n";
    }
        cout << "Nilai Konversi Huruf : " << predikat <<endl;
        cout <<   "=======================================" << endl;
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI" << endl;
}