#include <iostream>
#include "../model/ModelHotel.h"
#include <string>
using namespace std;


void vAddHotel(){
    string addNamaHotel, addJenisKamar;
    int addJumlahKamar;
    cout << "Masukan Nama Hotel : ";
    cin >> addNamaHotel;
    cout << "Masukan Jenis Kamar : ";
    cin >> addJenisKamar;
    cout << "Jumlah sisa kamar : ";
    cin >> addJumlahKamar;
    maddHotel (addNamaHotel, addJenisKamar, addJumlahKamar);
    cout << endl;
}

void vViewHotel(){
    mViewHotel();
}

void vSearchHotel(){
    string addNamaHotel;
    cout << "masukan Nama Hotel : ";
    cin >> addNamaHotel;
    int index = mSearchHotel(addNamaHotel);
    if (index != -1){
        cout << " Nama Hotel: " << namaHotel[index] << endl;
        cout << " Jenis Kamar: " << jenisKamar[index] << endl;
        cout << " Jumlah sisa kamar : " << jumlahKamar[index] << endl;
    } else {
        cout << "hotel tidak ditemukan";
    }
}
