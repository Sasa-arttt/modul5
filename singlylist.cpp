#include "Singlylist.h"

void createList(List &L) {
    // List kosong: First tidak menunjuk elemen apa pun
    L.First = Nil;
}

address alokasi(infotype x) {
    // Membuat elemen baru dengan info x dan next = Nil
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    // Menghapus elemen dari memori
    delete P;
    P = Nil;
}

void printInfo(List L) {
    // Menampilkan info semua elemen dari First sampai akhir
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    // Menyisipkan elemen P di awal list
    P->next = L.First;
    L.First = P;
}

address findElm(List L, infotype x) {
    // Mencari elemen dengan info x, mengembalikan alamatnya
    // atau Nil jika tidak ditemukan
    address P = L.First;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

int sumInfo(List L) {
    // Menjumlahkan info seluruh elemen
    int total = 0;
    address P = L.First;
    while (P != Nil) {
        total += P->info;
        P = P->next;
    }
    return total;
}