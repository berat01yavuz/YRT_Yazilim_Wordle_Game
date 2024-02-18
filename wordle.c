#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define kelime_boyut 10
#define kelime_no 4

char kelimeler[kelime_no][kelime_boyut] = {"kalem", "lambacı", "hakan", "perde"};
char secilenkelime[kelime_boyut], tahmin[kelime_boyut], tablo[6][kelime_boyut], bulunanharfler[kelime_boyut];
static int indis, indx, sonuc = 0, i, j;

void kelimesecim() {
    srand(time(0));
    indis = rand() % kelime_no;
    strcpy(secilenkelime, kelimeler[indis]);
    indx = 0;
}
/*
Kelime seçme işlemini yapmak için bir fonksiyon tanımladık. Burada srand, rand komutu ile
belirlediğimiz kelime aralığında seçim yaptırdık. strcpy komutu ile secilenkelime konumuna
kelimeler[indis] dizi değerini atadık. 
*/