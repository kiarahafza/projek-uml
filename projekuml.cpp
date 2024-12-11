#include <iostream>
#include <string>

using namespace std;

// Class Notifikasi
class Notifikasi {
public:
    int idNotifikasi;
    string tipeNotifikasi;

    Notifikasi(int id, string tipe) : idNotifikasi(id), tipeNotifikasi(tipe) {}

    void kirimNotifikasi() {
        cout << "Mengirim notifikasi dengan ID: " << idNotifikasi 
             << " dan tipe: " << tipeNotifikasi << endl;
    }
};

// Class Pelanggan
class Pelanggan {
public:
    int idPelanggan;
    string nama;
    string email;
    string alamat;

    Pelanggan(int id, string nama, string email, string alamat)
        : idPelanggan(id), nama(nama), email(email), alamat(alamat) {}

    void buatPesanan() {
        cout << nama << " membuat pesanan" << endl;
    }

    void lihatPesanan() {
        cout << nama << " melihat pesanan" << endl;
    }

    void updateProfil() {
        cout << nama << " memperbarui profil" << endl;
    }
};

// Class Pesanan
class Pesanan {
public:
    int idPesanan;
    string tanggal;
    double totalHarga;
    string statusPesanan;

    Pesanan(int id, string tanggal, double harga, string status)
        : idPesanan(id), tanggal(tanggal), totalHarga(harga), statusPesanan(status) {}

    void hitungTotal() {
        cout << "Total harga pesanan: " << totalHarga << endl;
    }

    void batalPesanan() {
        cout << "Pesanan dengan ID " << idPesanan << " dibatalkan" << endl;
    }
};

// Class Produk
class Produk {
public:
    int idProduk;
    string namaProduk;
    string statusPembayaran;

    Produk(int id, string nama, string status)
        : idProduk(id), namaProduk(nama), statusPembayaran(status) {}

    void tampilkanInfo() {
        cout << "Produk: " << namaProduk << endl;
        cout << "Status Pembayaran: " << statusPembayaran << endl;
    }

    void perbaruiStok() {
        cout << "Stok untuk " << namaProduk << " diperbarui" << endl;
    }
};

// Class Pembayaran
class Pembayaran {
public:
    int idPembayaran;
    double jumlahBayar;
    string statusPembayaran;

    Pembayaran(int id, double jumlah, string status)
        : idPembayaran(id), jumlahBayar(jumlah), statusPembayaran(status) {}

    void verifikasi() {
        cout << "Verifikasi pembayaran ID: " << idPembayaran << endl;
    }

    void cetakStruk() {
        cout << "Cetak struk untuk pembayaran sebesar: " << jumlahBayar << endl;
    }
};

// Class AdminToko
class AdminToko {
public:
    int idAdmin;
    string namaAdmin;

    AdminToko(int id, string nama) : idAdmin(id), namaAdmin(nama) {}

    void kelolaPesanan() {
        cout << namaAdmin << " mengelola pesanan" << endl;
    }

    void kelolaPembayaran() {
        cout << namaAdmin << " mengelola pembayaran" << endl;
    }
};

// Class PaymentGateway
class PaymentGateway {
public:
    int idGateway;
    string jenisPembayaran;

    PaymentGateway(int id, string jenis) : idGateway(id), jenisPembayaran(jenis) {}

    void prosesPembayaran() {
        cout << "Proses pembayaran melalui gateway: " << jenisPembayaran << endl;
    }

    void kirimNotifikasi() {
        cout << "Mengirim notifikasi dari payment gateway" << endl;
    }
};

int main() {
    // Membuat objek pelanggan
    Pelanggan pelanggan1(1, "Zahwa", "agrolizahwa@gmail.com", "Asrama Kinanti");

    // Membuat pesanan
    pelanggan1.buatPesanan();

    // Membuat produk
    Produk produk1(2, "Pashmina Lafiye", "Sudah Dibayar");
    produk1.tampilkanInfo();
    cout << endl;

    //Membuat pesanan
    Pesanan pesanan1(3, "2 April", 200000, "Diverifikasi");
    pesanan1.hitungTotal();

    // Membuat pembayaran
    Pembayaran pembayaran1(4, 200000, "Sudah Diverifikasi");
    pembayaran1.verifikasi();
    pembayaran1.cetakStruk();
    cout << endl;

    // Admin toko mengelola pesanan dan pembayaran
    AdminToko admin1(5, "Ciyas");
    admin1.kelolaPesanan();
    admin1.kelolaPembayaran();
    cout << endl;

    // Payment Gateway
    PaymentGateway gateway1(6, "Gopay");
    gateway1.prosesPembayaran();
    gateway1.kirimNotifikasi();

    // Mengirim notifikasi
    Notifikasi notif1(7, "Pembayaran Berhasil");
    notif1.kirimNotifikasi();

    return 0;
}