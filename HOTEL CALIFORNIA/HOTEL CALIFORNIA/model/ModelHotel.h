#include <iostream>
#include <string>
#include "../Database/DatabaseHotel.h"
using namespace std;


void maddHotel(string addNamaHotel, string addJenisKamar, int addJumlahKamar){
    namaHotel[nHotel] = addNamaHotel;
    jenisKamar[nHotel] = addJenisKamar;
    jumlahKamar[nHotel] = addJumlahKamar;
    nHotel++;
}
void mViewHotel(){
    cout << "Daftar Hotel" << endl;
    for (int i = 0; i < nHotel; i++){
        cout << "Nama Hotel: " << namaHotel[i] <<endl;
        cout << "Jenis Kamar: " << jenisKamar[i] <<endl;
        cout << "Jumlah Kamar: " << jumlahKamar[i] <<endl;
        cout << endl;
    }
}

int mSearchHotel(string addNamaHotel){
    int index = -1;
    for (int i = 0; i < nHotel; i++){
        if (namaHotel[i] == addNamaHotel) {
            index = i;
            break;
        }    
    }
   return index;
}

