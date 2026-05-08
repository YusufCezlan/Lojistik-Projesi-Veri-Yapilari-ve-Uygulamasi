#include "lojistik.h"

int main() {
    int i; // Tüm döngüler için tek bir deðiþken yeterli
    
    // 1. Hash Tablosu Hazýrlýðý
    Paket hashTablo[TABLE_SIZE];
    for(i = 0; i < TABLE_SIZE; i++) {
        hashTablo[i].dolu = 0;
    }

    // 2. Graf (Þehir Aðý) Hazýrlýðý
    Graf* lojistikAgi = (Graf*)malloc(sizeof(Graf));
    for(i = 0; i < SEHIR_SAYISI; i++) {
        lojistikAgi->komsuListesi[i] = NULL;
        lojistikAgi->ziyaretEdildi[i] = 0;
    }

    printf("--- PAKET GIRISI (Hash Table - Tip B & Linear Probing) ---\n");
    hashEkle(hashTablo, 1250, "Elektronik");
    hashEkle(hashTablo, 5050, "Gida");
    hashEkle(hashTablo, 3150, "Tekstil"); 
    hashEkle(hashTablo, 4421, "Ilac");
    hashEkle(hashTablo, 8811, "Kitap");

    printf("\n--- LOJISTIK AG GEZINTISI (DFS) ---\n");
    grafYolEkle(lojistikAgi, 0, 1);
    grafYolEkle(lojistikAgi, 0, 2);
    grafYolEkle(lojistikAgi, 1, 3);
    grafYolEkle(lojistikAgi, 2, 4);

    printf("DFS Rotasi:\n");
    DFS(lojistikAgi, 0);

    printf("\nSistem Calismasi Tamamlandi. Adresleri Raporunuza Ekleyin.\n");
    return 0;
}
