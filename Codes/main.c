/*
* @main.c
* @Menu Kontrollerini Gerceklestiren Sinif
* @Odev 2
* @26.12.2019
* @Yunus Emre Atik - yunusemre.atik@stu.fsm.edu.tr
*/
#include <stdio.h>
#include <time.h>
#include "randevu.h"
#include <string.h>

int main()
{
    char menu_Select_Array[100]; 	// Menu'den Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char search_Select_Array[100]; // Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char ada_Gore_Arama[100];   // Ada Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char gune_Gore_Arama[100];	// Gune Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim

    char randevu_Ver_Isim[100]; // Randevu'da Isim'e Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char randevu_Ver_Soyisim[100]; // Randevu'da SoyIsim'e Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char randevu_Ver_Gun[100]; // Randevu'da Gun'e Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char randevu_Ver_Saat[100]; // Randevu'da Saat'e Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim
    char randevu_Sil_Isim[100]; // Randevu'da Silerken Isim'e Gore Arama'da Girilen Degerleri Kontrolu Icin Bir Dizi Tanimladim

    int finish_loop=0;
    while(finish_loop!=1) //Sadece 5.secimde finish_loop==1 oluyor.Olmadigi Surece Donmeye Devam Ediyor
    {
        printf("--> [1]: Randevulari Goster \n");
        printf("--> [2]: Randevu Ara\n");
        printf("--> [3]: Randevu Ver\n");
        printf("--> [4]: Randevu Sil\n");
        printf("--> [5]: Exit\n");

        printf("Lutfen Menu Seciminizi Yapiniz : ");
        scanf("%s",menu_Select_Array);//Menu Secimi Aliyorum ve String(char) Dizime Atiyorum (Bosluga Kadar)

        int mistake_1=0;	//1. Hata Degiskeni
        int menu_lenght=0;	//Menu_lengt kontrol degiskeni

        menu_lenght=strlen(menu_Select_Array);
        if(menu_lenght>1) // Menu Lenght 1'den fazla ise Arguman Hatasi
        {
            mistake_1++;
            printf("-->HATA<-- 1 ile 5 araliginda rakam giriniz \n");
        }
        else
        {
            if(!isdigit(menu_Select_Array[0])) // Girilen Deger Digit Degil ise isdigit hatasi
            {
                mistake_1++;
                printf("-->HATA<-- Girilen Deger Isdigit'e Uymuyor\n");
            }
        }
        if(mistake_1==0)	// Hata Yoksa Sadece son kontrol kaldi
        {
            if((!(menu_Select_Array[0]>'0')|| !(menu_Select_Array[0]<'6'))) // Son kontrol olan, girilen deger  0-6 araliginda mi?
            {
                mistake_1++;
                printf("-->HATA<-- 1 ile 5 araliginda rakam giriniz \n");	// Aralikta degil ise hatayi verip en basa donuyor
            }
            else	//Hata yoksa Girilen Deger 1-5 araligindadir
            {
                switch(menu_Select_Array[0]) //Ilk degere gore switch ettik
                {
                    case '1' :
                            randevulari_Goster();
                            break;
                    case '2' :
                                printf("\t1-> Ada Gore Arama \n");
                                printf("\t2-> Gune Gore Arama\n");
                                printf("\t3-> Geri Don\n");
                                printf("\tLutfen Arama Seciminizi Yapiniz : ");
                                scanf("%s",&search_Select_Array);

                                int adim_Sayisi;
                                adim_Sayisi=strlen(search_Select_Array);
                                int i;
                                int hata=0;
                                for(i=0;i<adim_Sayisi;i++) //Adim Sayisi Kadar Girilen Degerin Digit Olup Olmadigini Kontrol Ediyorum
                                {
                                    while(hata==0)
                                    {
                                        if(!isdigit(search_Select_Array[i]))
                                        {
                                            printf("\t!!! (HATA) 1-3 arasi Sayi Giriniz\n");
                                            printf("\t!!! Menuye Yonlendirildiniz<---\n");
                                            hata++;
                                        }
                                        else
                                        {
                                            break;		// Degilse donguden cikiyor
                                        }
                                    }
                                }
                                if(hata==0)
                                {
                                    int secim;
                                    secim=atoi(search_Select_Array);
                                    if(!( (secim==1) || (secim==2) || (secim==3) )) //Arama Secimlerim 1-2-3 Degil ise Hata Veriyor
                                    {
                                          printf("\t!!! (HATA) 1-3 arasi Sayi Giriniz\n");
                                          printf("\t!!! Menuye Yonlendirildiniz<---\n");
                                    }
                                    else
                                    {
                                        if(secim==1)//ada gore
                                        {
                                            printf("\tArama Yapilacak Kisinin Ilk Ismini Giriniz : ");
                                            scanf("%s",&ada_Gore_Arama);
                                            int metin_Uzunluk=strlen(ada_Gore_Arama);
                                            int j;
                                            int hata_1=0;
                                            for (j=0;j<metin_Uzunluk;j++)
                                            {
                                                 while(hata_1==0)
                                                 {
                                                     if(!( ('A'<=ada_Gore_Arama[j]) || (ada_Gore_Arama[j]>='Z') || ('a'<=ada_Gore_Arama[j]) || (ada_Gore_Arama[j]>='Z') ))
                                                     {
                                                         printf("\t!!! (HATA) Girdinizde Isim'e Uymayan karakterler var (A-z) \n",j);
                                                         printf("\t!!! Menuye Yonlendirildiniz<---\n");
                                                         hata_1++;
                                                     }
                                                     else
                                                     {
                                                         break;		// Degilse donguden cikiyor
                                                     }
                                                 }
                                            }
                                            if(hata_1==0)
                                            {
                                                 ada_Gore_Randevu_Ara(ada_Gore_Arama);
                                            }
                                        }
                                        else if(secim==2)//gune gore
                                        {
                                            printf("\tPazartesi = 1 \n ");
                                            printf("\tSali = 2  \n ");
                                            printf("\tCarsamba = 3 \n  ");
                                            printf("\tPersembe = 4\n  ");
                                            printf("\tCuma = 5 \n  ");
                                            printf("\tCumartesi = 6  \n ");
                                            printf("\tPazar = 7\n  ");
                                            printf("\tAramak Istediginiz Gun,Haftanin Kacinci Gunu  ? (1-7): ");
                                            scanf("%s",gune_Gore_Arama);

                                            int adim_Sayisi_3;
                                            adim_Sayisi_3=strlen(gune_Gore_Arama);
                                            int hata_2=0;

                                            if(adim_Sayisi_3>1)//Eger Gun Girdisi 1 haneden den buyukse hata
                                            {
                                                 hata_2++;
                                                 printf("\t!!! (HATA) 1-7 arasi Sayi Giriniz\n");
                                                 break;
                                            }
                                            else if(adim_Sayisi_3==1)
                                            {
                                                if(!((gune_Gore_Arama[0]>'0') && (gune_Gore_Arama[0]<='7')))//Eger Gun Girdisi 1 hane ve 7 den buyukse hata
                                                {
                                                    printf("\t!!! (HATA) 1-7 arasi Sayi Giriniz\n");
                                                    break;
                                                }
                                                else{
                                                    gune_Gore_Randevu_Ara(gune_Gore_Arama);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            printf("--->Menuye Yonlendirildiniz<---\n");
                                        }
                                    }
                                }
                            break;
                    case '3' :
                                printf("\tLutfen Randevu Verilecek Kisinin Ismini Giriniz : ");
                                scanf("%s",randevu_Ver_Isim);

                                int metin_Uzunluk=strlen(randevu_Ver_Isim);
                                int j;
                                int hata_1=0;
                                for (j=0;j<metin_Uzunluk;j++)
                                {
                                     while(hata_1==0)
                                     {
                                         if( !( ('A'<=randevu_Ver_Isim[j]) || (randevu_Ver_Isim[j]>='Z') || ('a'<=randevu_Ver_Isim[j]) || (randevu_Ver_Isim[j]>='Z') ) )
                                         {
                                             printf("\t!!! (HATA) Girdinizde Isim'e Uymayan karakterler var (A-z) \n",j);
                                             printf("\t!!! Menuye Yonlendirildiniz<---\n");
                                             hata_1++;
                                         }
                                         else
                                         {
                                             break;		// Degilse donguden cikiyor
                                         }
                                     }
                                }
                                if(hata_1==0)
                                {
                                    printf("\tLutfen Randevu Verilecek Kisinin Soyismini Giriniz : ");
                                    scanf("%s",randevu_Ver_Soyisim);

                                    int uzun=strlen(randevu_Ver_Soyisim);
                                    int j;
                                    for (j=0;j<uzun;j++)
                                    {
                                         while(hata_1==0)
                                         {
                                             if( !( ('A'<=randevu_Ver_Soyisim[j]) || (randevu_Ver_Soyisim[j]>='Z') || ('a'<=randevu_Ver_Soyisim[j]) || (randevu_Ver_Soyisim[j]>='Z') ) )
                                             {
                                                 printf("\t!!! (HATA) Girdinizde SoyIsim'e Uymayan karakterler var (A-z) \n",j);
                                                 printf("\t!!! Menuye Yonlendirildiniz<---\n");
                                                 hata_1++;
                                             }
                                             else
                                             {
                                                 break;		// Degilse donguden cikiyor
                                             }
                                         }
                                    }
                                }
                                if(hata_1==0)
                                {
                                    printf("\tPazartesi = 1 \n ");
                                    printf("\tSali = 2  \n ");
                                    printf("\tCarsamba = 3 \n  ");
                                    printf("\tPersembe = 4\n  ");
                                    printf("\tCuma = 5 \n  ");
                                    printf("\tCumartesi = 6  \n ");
                                    printf("\tPazar = 7\n  ");
                                    printf("\tHaftanin Kacinci Gunu ? : ");
                                    scanf("%s",randevu_Ver_Gun);

                                    int gun_Uzunluk;
                                    gun_Uzunluk=strlen(randevu_Ver_Gun);

                                    int hata_2=0;
                                    if(gun_Uzunluk>1) //Eger Gun Girdisi 1 hane den buyukse hata
                                    {
                                         hata_2++;
                                         printf("\t!!! (HATA) 1-7 arasi Sayi Giriniz\n");
                                         break;
                                    }
                                    else if(gun_Uzunluk==1)
                                    {
                                        if(!((randevu_Ver_Gun[0]>'0') && (randevu_Ver_Gun[0]<='7'))) //Eger Gun Girdisi 1 hane ve 7 den buyukse hata
                                        {
                                            printf("\t!!! (HATA) 1-7 arasi Sayi Giriniz\n");
                                            break;
                                        }
                                    }
                                }
                                if(hata_1==0)
                                {
                                    printf("\tLutfen Randevu Saatini Giriniz : ");
                                    scanf("%s",randevu_Ver_Saat);

                                    int saat_Uzunluk;
                                    saat_Uzunluk=strlen(randevu_Ver_Saat);
                                    int hata_2=0;
                                        if(saat_Uzunluk>2) //Eger Saat Girdisi 2 hane den buyukse hata
                                        {
                                             hata_2++;
                                             printf("\t!!! (HATA) 1-24 arasi Sayi Giriniz\n");
                                             break;
                                        }
                                        else if(saat_Uzunluk==1)
                                        {
                                            if(!((randevu_Ver_Saat[0]>'0') && (randevu_Ver_Saat[0]<='9'))) //Eger Gun Girdisi 1 ve 9 den buyukse hata
                                            {
                                                printf("\t!!! (HATA) 1-24 arasi Sayi Giriniz\n");
                                                break;
                                            }
                                            else
                                            {
                                               randevu_Ver(randevu_Ver_Isim,randevu_Ver_Soyisim,randevu_Ver_Gun,randevu_Ver_Saat);
                                            }
                                        }
                                        else if(saat_Uzunluk==2)
                                        {
                                            if(!((randevu_Ver_Saat[0]>'0') && (randevu_Ver_Saat[0]<='2'))) //Eger Gun Girdisi 2 ve 1.indis 2 den buyukse hata
                                            {
                                                printf("1\t!!! (HATA) 1-24 arasi Sayi Giriniz\n");
                                                break;
                                            }
                                            if(randevu_Ver_Saat[0]=='1')
                                            {
                                                if(!((randevu_Ver_Saat[1]>='0') && (randevu_Ver_Saat[1]<='9'))) //Eger Gun Girdisi 1 ve 1.indis 9 den buyukse hata
                                                {
                                                    printf("2\t!!! (HATA) 1-24 arasi Sayi Giriniz\n");
                                                    break;
                                                }
                                                else{
                                                    randevu_Ver(randevu_Ver_Isim,randevu_Ver_Soyisim,randevu_Ver_Gun,randevu_Ver_Saat);
                                                }
                                            }
                                            if(randevu_Ver_Saat[0]=='2'){
                                                if(!((randevu_Ver_Saat[1]>='0') && (randevu_Ver_Saat[1]<='4'))) //Eger Gun Girdisi 2 ve 2.indis 4 den buyukse hata
                                                {
                                                    printf("2\t!!! (HATA) 1-24 arasi Sayi Giriniz\n");
                                                    break;
                                                }
                                                else{
                                                    randevu_Ver(randevu_Ver_Isim,randevu_Ver_Soyisim,randevu_Ver_Gun,randevu_Ver_Saat);
                                                }
                                            }
                                        }
                                }
                            break;
                    case '4' :
                            printf("\tLutfen Silinecek Kisinin Ilk Ismini Giriniz : ");
                            scanf("%s",randevu_Sil_Isim);

                            randevu_Sil_Isim_Kontrol(randevu_Sil_Isim);
                            break;
                    case '5' :
                            printf("Bizi Tercih Etiiginiz icin TESEKKURLER \n\n");
                            finish_loop=1;	//Bir daha donguye girmesin diye degiskeni 1 e esitliyorum
                            break;
                }
            }
        }
    }
return 1;
}
