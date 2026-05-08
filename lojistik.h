#ifndef LOJISTIK_H
#define LOJISTIK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10
#define SEHIR_SAYISI 5

typedef struct {
    int paketID;
    char icerik[50];
    int dolu;
} Paket;

typedef struct Komsu {
    int sehirID;
    struct Komsu* next;
} Komsu;

typedef struct {
    Komsu* komsuListesi[SEHIR_SAYISI];
    int ziyaretEdildi[SEHIR_SAYISI];
} Graf;

int hashTipB(int id);
void hashEkle(Paket tablo[], int id, char* icerik);
void grafYolEkle(Graf* g, int u, int v);
void DFS(Graf* g, int v);

#endif
