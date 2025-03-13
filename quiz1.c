#include "Quiz1.h"

// Fungsi untuk membuat node baru
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Gagal mengalokasikan memori!\n");
        exit(1);
    }
    newNode->info = 0;     
    newNode->next = NULL;  
    return newNode;
}

// Fungsi untuk menampilkan seluruh isi linked list
void showNode(struct Node* node) {
    if (node == NULL) {
        printf("Linked List Kosong!\n");
        return;
    }
    printf("Isi Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->info);
        node = node->next;
    }
    printf("NULL\n");
}

// Fungsi untuk menambahkan node di awal linked list
void insertAwal(struct Node** data, int Nilai) {
    struct Node* newNode = createNode();
    newNode->info = Nilai;      
    newNode->next = *data;      
    *data = newNode;            
}

// Fungsi untuk menambahkan node di akhir linked list
void insertAkhir(struct Node** data, int Nilai) {
    struct Node* newNode = createNode();
    newNode->info = Nilai;      
    newNode->next = NULL;       

    if (*data == NULL) {
        *data = newNode;        
        return;
    }

    struct Node* temp = *data;
    while (temp->next != NULL) {
        temp = temp->next;      
    }
    temp->next = newNode;       
}


// Fungsi untuk menambahkan node di antara dua node
void insertTengah(struct Node** Data, int Nilai, int posisi) {
    if (*Data == NULL || posisi <= 1) {
        insertAwal(Data, Nilai);
        return;
    }

    struct Node* newNode = createNode();
    newNode->info = Nilai;

    struct Node* temp = *Data;
    for (int i = 1; i < (posisi - 1) && temp->next != NULL; i++) {
        temp = temp->next;  
    }

    newNode->next = temp->next; 
    temp->next = newNode;       
}

//fungsi hapus node paling awal
void hapusAwal (struct Node** Data) {
	if (*Data == NULL){
		printf ("node kosong!");
		return;
	}
	struct Node* temp = *Data;
	*Data = (*Data)->next;
	free (temp);
};

//fungsi hapus node paling akhir
void hapusAkhir (struct Node** Data) {
	if (*Data == NULL) {
		printf ("node kosong!");
		return;
	}
	if ((*Data)->next == NULL) {
		free (*Data);
		*Data = NULL;
		return;
	}
	struct Node* temp = *Data;
	while (temp->next->next != NULL){
		temp = temp->next;
	}
	
	free(temp->next);
	temp->next = NULL;
}

//fungsi hapus nilai node sesuai isi yang dipilih
void hapusNode (struct Node** Data, int Target) {
	if (*Data == NULL) {
		printf ("Node kosong");
		return;
	}
	
	struct Node* temp = *Data;
	struct Node* prev = NULL;
	
	if (temp != NULL && temp->info == Target) {
        *Data = temp->next; // Pindahkan head ke node berikutnya
        free(temp);         // Hapus node
        printf("Node dengan nilai %d berhasil dihapus.\n", Target);
        return;
    }
    
    while (temp != NULL && temp->info != Target) {
        prev = temp;        // Simpan node sebelumnya
        temp = temp->next;  // Geser ke node berikutnya
    }
	
    if (temp == NULL) {
        printf("Node dengan nilai %d tidak ditemukan.\n", Target);
        return;
    }
	
    prev->next = temp->next;
    free(temp);		    
}

// fungsi untuk menghapus seluruh linkedList
void ClearNode (struct Node** Data) {
	struct Node* current = *Data;
	struct Node* nextNode;
	
	while (current != NULL) {
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	*Data = NULL;
}