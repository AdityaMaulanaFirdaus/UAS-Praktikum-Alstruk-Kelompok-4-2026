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
    // Anggota 3: Panggil fungsi loadDatabaseBuku() di sini nanti
    
    // Anggota 2: Buat looping do-while & switch-case menu (1-9) di sini
    
    return 0;
}
