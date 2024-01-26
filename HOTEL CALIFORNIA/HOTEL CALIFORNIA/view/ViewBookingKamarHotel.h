#include <iostream>
#include <string>
#include"../model/ModelBookingKamar.h"
using namespace std;

void vAddDataCheckIn(){
    string addJenisKamarKosong;
    string addTanggalBooking, addTanggalCheckOut;
    cout << "Masukkan jenis kamar : ";
    cin >> addJenisKamarKosong;
    cout << "Masukkan tanggal booking hotel : ";
    cin >> addTanggalBooking;
    cout << "Masukkan tanggal check out hotel : ";
    cin >> addTanggalCheckOut;
    mAddDataCheckIn(addJenisKamarKosong, addTanggalBooking, addTanggalCheckOut);
    cout << endl;
}

void vViewDataCheckIn(){
    mViewDataCheckIn();
}

void vSearchJenisKamar(){
    string addJenisKamarKosong;
    cout << "Cari jenis kamar yang anda sudah anda booking :";
    cin >> addJenisKamarKosong;
    int index = mSearchJenisKamarKosong(addJenisKamarKosong);
    if (index != -1){
        cout << "Jenis kamar : " << jenisKamarKosong[index]<<endl;
        cout << "Terimakasih";
        cout << endl;
    }
}