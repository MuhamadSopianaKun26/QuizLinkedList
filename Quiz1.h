#include <stdio.h>
#include <stdlib.h>

// Definisi struktur Node
struct Node {
    int info;              
    struct Node* next;     
};

// Fungsi untuk membuat node baru
struct Node* createNode();

// Fungsi untuk menampilkan seluruh isi linked list
void showNode(struct Node* node);

// Fungsi untuk menambahkan node di awal linked list
void insertAwal(struct Node** data, int Nilai);

// Fungsi untuk menambahkan node di akhir linked list
void insertAkhir(struct Node** data, int Nilai);

// Fungsi untuk menambahkan node di antara dua node
void insertTengah(struct Node** Data, int Nilai, int posisi);

//fungsi hapus node paling awal
void hapusAwal (struct Node** Data);

//fungsi hapus node paling akhir
void hapusAkhir (struct Node** Data);

//fungsi hapus nilai node sesuai isi yang dipilih
void hapusNode (struct Node** Data, int Target);

// fungsi untuk menghapus seluruh linkedList
void ClearNode (struct Node** Data);