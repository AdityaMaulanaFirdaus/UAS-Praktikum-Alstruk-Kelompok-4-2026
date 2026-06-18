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
	
    if (jumlahBuku >= MAX_BUKU) {
        cout << "\nKapasitas perpustakaan penuh!\n";
        return;
    }
    cout << "\nMasukkan ID Buku baru: "; cin >> daftarBuku[jumlahBuku].idBuku;
    cout << "Masukkan Judul Buku  : "; cin.ignore(); getline(cin, daftarBuku[jumlahBuku].judul);
    cout << "Masukkan Pengarang   : "; getline(cin, daftarBuku[jumlahBuku].pengarang);
    daftarBuku[jumlahBuku].tersedia = true;
    jumlahBuku++;
    cout << "\n>> Buku berhasil ditambahkan!\n";
}

void hapusBuku() {
	
    string id;
    cout << "\nMasukkan ID Buku yang ingin dihapus: "; cin >> id;
    int indeks = -1;
    for (int i = 0; i < jumlahBuku; i++) {
        if (daftarBuku[i].idBuku == id) {
            indeks = i;
            break;
        }
    }
    if (indeks == -1) {
        cout << "Buku dengan ID tersebut tidak ditemukan.\n";
    } else {
        for (int i = indeks; i < jumlahBuku - 1; i++) {
            daftarBuku[i] = daftarBuku[i + 1];
        }
        jumlahBuku--;
        cout << "\n>> Buku berhasil dihapus!\n";
    }
}
g


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
    // Tulis logika urutkan buku di sini
     cout << "\n-----Fitur Sorting Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}

void rekomendasiBuku() {
    // Tulis logika rekomendasi buku di sini
     cout << "\n-----Fitur Rekomendasi Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
}

void riwayatBuku() {
    // Tulis logika riwayat transaksi di sini
     cout << "\n-----Fitur Riwayat Buku----" << endl;
     cout << "Fitur ini masih dalam pengembangan...\n";
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
