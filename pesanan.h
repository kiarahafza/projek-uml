/**
 * Project Untitled
 */


#ifndef _PESANAN_H
#define _PESANAN_H

class pesanan {
public: 
    int idPesanan;
    string tanggal;
    double totalHarga;
    string statusPesanan;
    
void hitungTotal();
    
void batalPesanan();
    
void updateStatus();
};

#endif //_PESANAN_H