#include "Quiz1.h"

// Fungsi utama
int main() {
    struct Node* dataNode = NULL; // Inisialisasi linked list kosong
    
    // 1. Menambahkan bilangan 7 di awal
    insertAwal(&dataNode, 7);
    printf("outpur 1. :\n");
    showNode(dataNode);

    // 2. Menambahkan bilangan 11 di akhir
    insertAkhir(&dataNode, 11);
    printf("outpur 2. :\n");
    showNode(dataNode);
    
    // 3. Menambahkan bilangan 9 di antara 7 dan 11 (posisi ke-2)
    insertTengah(&dataNode, 9, 2);
	printf("outpur 3. :\n");
    showNode(dataNode);

	// 4. masukan bilanhan 5 diawal list (insert first)
	insertAwal(&dataNode, 5);
    printf("outpur 4. :\n");
    showNode(dataNode);
    
	// 5. masukan blangan 13 diakhir list {insert last}
	insertAkhir(&dataNode, 13);
    printf("outpur 5. :\n");
    showNode(dataNode);

	// 6. hapus elemen terakhir (bilangan 13) pada list {delete last}
	hapusAkhir(&dataNode);
    printf("outpur 6. :\n");
    showNode(dataNode);	
	
	// 7. hapus bilangan 7 pada list
	hapusNode(&dataNode, 7);
    printf("outpur 7. :\n");
    showNode(dataNode);
    
	// 8. hapus elemen pertama (bilangan 5) pada list {dellete first}
    hapusAwal(&dataNode);
	printf("outpur 8. :\n");
    showNode(dataNode);
    
	// 9. hapus semua elemen list deret bilangan ganjil 
	ClearNode(&dataNode);
	printf("outpur 8. :\n");
    showNode(dataNode);	
	
	
	
    return 0;
}
