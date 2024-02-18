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

int tablodoldur() {
    sonuc = 1;
    for (i = 0; i < strlen(secilenkelime); i++) {
        if (secilenkelime[i] != tahmin[i]) {
            sonuc = 0;
            bulunanharfler[i] = '_';
        } else
            bulunanharfler[i] = tahmin[i];
        tablo[indx][i] = bulunanharfler[i];
    }
    indx++;
    return sonuc;
}
/*
Başlangıçta tanımlama işleminde oluşturduğumuz tablonun içini doğru harflerle doldurma
işlemi için fonksiyon tanımladık. for döngüsünde strlen komutu ile kelimenin harf sayısını aldık ve
harf sayısı kadar döngü döndürdük. Böylece tahmin edilen kelimedeki i. harfin seçtiğimiz kelimedeki i. harf
ile kıyaslamasını yaptırdık ve eğer aynı ise yerine yazmasını değilse "_" koymasını sağladık. 
*/