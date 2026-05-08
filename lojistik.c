#include "lojistik.h"

int hashTipB(int id) {
    int parca1 = id / 100;
    int parca2 = id % 100;
    return (parca1 + parca2) % TABLE_SIZE;
}

void hashEkle(Paket tablo[], int id, char* icerik) {
    int index = hashTipB(id);
    int sayac = 0; // i yerine sayac kullandýk, kafa karýþmasýn

    while (tablo[index].dolu && sayac < TABLE_SIZE) {
        printf("Cakisma! Indis %d dolu. Kaydiriliyor...\n", index);
        index = (index + 1) % TABLE_SIZE;
        sayac++;
    }

    if (sayac == TABLE_SIZE) {
        printf("Hata: Tablo tamamen dolu!\n");
        return;
    }

    tablo[index].paketID = id;
    strcpy(tablo[index].icerik, icerik);
    tablo[index].dolu = 1;

    printf("Eklendi -> ID: %d | Indis: %d | RAM: %p\n", id, index, (void*)&tablo[index]);
}

void grafYolEkle(Graf* g, int u, int v) {
    Komsu* yeni = (Komsu*)malloc(sizeof(Komsu));
    yeni->sehirID = v;
    yeni->next = g->komsuListesi[u];
    g->komsuListesi[u] = yeni;
}

void DFS(Graf* g, int v) {
    g->ziyaretEdildi[v] = 1;
    printf("Sehir %d ziyaret edildi. (RAM: %p)\n", v, (void*)&g->komsuListesi[v]);

    Komsu* temp = g->komsuListesi[v];
    while (temp) {
        if (!g->ziyaretEdildi[temp->sehirID]) {
            DFS(g, temp->sehirID);
        }
        temp = temp->next;
    }
}
