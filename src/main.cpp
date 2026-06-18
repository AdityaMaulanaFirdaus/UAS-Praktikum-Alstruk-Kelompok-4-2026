#include <iostream>
#include <string>

using namespace std;

// Struktur Data Utama
struct Buku {
    string idBuku;
    string judul;
    string pengarang;
    bool tersedia;
};

// Global Variable Koleksi Data
const int MAX_BUKU = 100;
Buku daftarBuku[MAX_BUKU];
int jumlahBuku = 0;

string riwayatPeminjaman[MAX_BUKU];
int jumlahRiwayat = 0;


// --- TUGAS ANGGOTA 3 ---
void loadDatabaseBuku() {
    // Tulis data awal bawaan di sini
    cout << "\n-----Fitur Data Base-----" << endl;
    cout << "Fitur ini masih dalam pengembangan...\n";
}

void tampilBuku() {
    // Tulis logika menampilkan buku di sini
     cout << "\n-----Fitur Tampil Buku-----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}

void cariBuku() {
    // Tulis logika pencarian buku di sini
    cout << "\n-----Fitur Cari Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}


// --- TUGAS ANGGOTA 2 ---
void tambahBuku() {
    // Tulis logika tambah data buku di sini
    cout << "\n-----Fitur Tambah Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}

void hapusBuku() {
    // Tulis logika hapus data buku di sini
     cout << "\n-----Fitur Hapus Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}


// --- TUGAS ANGGOTA 4 ---
void pinjamBuku() {
    // Tulis logika pinjam buku di sini
     cout << "\n-----Fitur Pinjam Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}

void kembalikanBuku() {
    // Tulis logika kembalikan buku di sini
     cout << "\n-----Fitur Kembalikan Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}


// --- TUGAS ANGGOTA 5 ---
void sortingBuku() {
   for (int i = 0; i < jumlahBuku - 1; i++) {
        for (int j = 0; j < jumlahBuku - i - 1; j++) {
            if (daftarBuku[j].judul > daftarBuku[j + 1].judul) {
                Buku temp = daftarBuku[j];
                daftarBuku[j] = daftarBuku[j + 1];
                daftarBuku[j + 1] = temp;
            }
        }
    }
    cout << "\n>> Daftar buku berhasil diurutkan berdasarkan judul (A-Z)!\n";
    tampilBuku();
}

void rekomendasiBuku() {
    cout << "\n========================================\n";
    cout << "       REKOMENDASI BUKU MINGGU INI      \n";
    cout << "========================================\n";
    if (jumlahBuku > 0) {
        cout << " -> " << daftarBuku[0].judul << " (Paling banyak dicari)\n";
    } else {
        cout << " Belum ada rekomendasi.\n";
    }
}

void riwayatBuku() {
    cout << "\n========================================\n";
    cout << "      RIWAYAT TRANSAKSI PERPUSTAKAAN    \n";
    cout << "========================================\n";
    if (jumlahRiwayat == 0) {
        cout << " Belum ada riwayat transaksi.\n";
        return;
    }
    for (int i = 0; i < jumlahRiwayat; i++) {
        cout << " " << i + 1 << ". " << riwayatPeminjaman[i] << endl;
    }
}

// --- MENU UTAMA ---
int main() {
    loadDatabaseBuku(); 
    int pilihan;
    
    do {
        cout << "\n========================================\n";
        cout << "     SISTEM MANAJEMEN PERPUSTAKAAN      \n";
        cout << "========================================\n";
        cout << " [1] Tampilkan Semua Buku\n";
        cout << " [2] Cari Buku\n";
        cout << " [3] Tambah Buku Baru\n";
        cout << " [4] Hapus Buku\n";
        cout << " [5] Pinjam Buku\n";
        cout << " [6] Kembalikan Buku\n";
        cout << " [7] Urutkan Buku (A-Z)\n";
        cout << " [8] Rekomendasi & Riwayat\n";
        cout << " [9] Keluar Sistem\n";
        cout << "========================================\n";
        cout << " Pilih menu (1-9): "; cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tampilBuku();
                break;
                
            case 2:
                cariBuku();
                break;
                
            case 3:
                tambahBuku();
                break;
                
            case 4:
                hapusBuku();
                break;
                
            case 5:
                pinjamBuku();
                break;
                
            case 6:
                kembalikanBuku();
                break;
                
            case 7:
                sortingBuku();
                break;
                
            case 8:
                rekomendasiBuku();
                riwayatBuku();
                break;
                
            case 9:
                cout << "\n>> Keluar dari sistem. Terima kasih!\n";
                break;
                
            default:
                cout << "\n[Peringatan] Pilihan tidak valid! Masukkan angka 1-9.\n";
                break;
        }
    } while (pilihan != 9);
    
    return 0;
}
