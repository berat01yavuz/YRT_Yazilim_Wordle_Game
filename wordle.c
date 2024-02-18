#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define kelime_boyut 10
#define kelime_no 4

char kelimeler[kelime_no][kelime_boyut] = {"kalem", "lambacı", "hakan", "perde"};
char secilenkelime[kelime_boyut], tahmin[kelime_boyut], tablo[6][kelime_boyut], bulunanharfler[kelime_boyut];
static int indis, indx, sonuc = 0, i, j;