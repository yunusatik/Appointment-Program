/*
* @randevu.h
* @Butun Randevu Islemlerinin Prototip Sinifi
* @Odev 2
* @26.12.2019
* @Yunus Emre Atik - yunusemre.atik@stu.fsm.edu.tr
*/
#ifndef __MATRIXOPS_H__
#define __MATRIXOPS_H__

typedef struct Randevu{
    char isim_Soyisim[30];
    int gun;
    int saat;
}randevu;
enum{
    Pazartesi=1,
    Sali=2,
    Carsamba=3,
    Persembe=4,
    Cuma=5,
    Cumartesi=6,
    Pazar=7
}gunler;

void randevulari_Goster();
void ada_Gore_Randevu_Ara(char[]);
void gune_Gore_Randevu_Ara(char[]);
void randevu_Ver(char[],char[],char[],char[]);
void randevu_Sil_Isim_Kontrol(char[]);
void randevu_Sil(int);
#endif
