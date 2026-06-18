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
}

void tampilBuku() {
    // Tulis logika menampilkan buku di sini
}

void cariBuku() {
    // Tulis logika pencarian buku di sini
}


// --- TUGAS ANGGOTA 2 ---
void tambahBuku() {
    // Tulis logika tambah data buku di sini
}

void hapusBuku() {
    // Tulis logika hapus data buku di sini
}


// --- TUGAS ANGGOTA 4 ---
void pinjamBuku() {
    // Tulis logika pinjam buku di sini
}

void kembalikanBuku() {
    // Tulis logika kembalikan buku di sini
}


// --- TUGAS ANGGOTA 5 ---
void sortingBuku() {
    // Tulis logika urutkan buku di sini
}

void rekomendasiBuku() {
    // Tulis logika rekomendasi buku di sini
}

void riwayatBuku() {
    // Tulis logika riwayat transaksi di sini
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
