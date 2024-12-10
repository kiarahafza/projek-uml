/**
 * Project Untitled
 */


#ifndef _PELANGGAN_H
#define _PELANGGAN_H

#include "notifikasi.h"
#include "notifikasi.h"


class pelanggan: public notifikasi, public notifikasi {
public: 
    void Attribute1;
    int idPelanggan;
    string nama;
    string email;
    string alamat;
    
void buatPesanan();
    
void lihatPesanan();
    
void detailPesanan();
    
void updateProfil();
};

#endif //_PELANGGAN_H