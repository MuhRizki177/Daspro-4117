#include <iostream>

using namespace std;

//Nama: Muhammad Rizki
//NIM: A11.2022.14657

int main()
{
//------------------------ Tugas 1 ------------------------
    int a, b, c;
    cout << "Masukkan bil genap antara 25 sampai 50: ";
    cin >> a;

    if (a % 2 == 0 && 25<a && a<50) {
        cout << "Bilangan Sesuai" << endl;
    }
    else {
        cout << "Bilangan Tidak Sesuai" << endl;
    }

    cout << "\nMasukkan bil ganjil lebih dari 13 atau kurang dari 5: ";
    cin >> b;

    if (b % 2 == 1 && b>13 || b % 2 == 1 && b<5) {
        cout << "Bilangan anda Sesuai"<<endl;
    }
    else {
        cout << "Bilangan anda tidak sesuai" << endl;
    }

    cout << "\nMasukkan bilangan bulat antara 25 sampai 50 atau bilangan ganjil antara 3 sampai 15: ";
    cin >> c;

    if (c % 2 == 0 && c>25 && c<50 || c % 2 == 1 && c>25 && c<50|| c % 2 == 1 && c>3 && c<15){
        cout << "Angka sesuai" << endl;
    }
    else {
        cout << "Angka tidak sesuai" << endl;
    }
//--------------------- Batas Tugas 1 ---------------------


//------------------------ Tugas 2 ------------------------
    int pilih;
    string jurusan;

    cout << "\nList Jurusan" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. Desain Komunikasi Visual" << endl;
    cout << "Ketik Nomor Urut Jurusanmu (1,2,3): ";
    cin >> pilih;

    if (pilih == 1){
        jurusan="Teknik Informatika";
    }
    else if (pilih == 2){
        jurusan="Sistem Informasi";
    }
    else if (pilih == 3){
        jurusan="Desain Komunikasi Visual";
    }
    else {
        jurusan="Tidak Diketahui";
    }

    cout << "\nJurusan Kamu Adalah "<<jurusan<<endl;
//--------------------- Tugas 2 Selesai ---------------------




    return 0;
}
