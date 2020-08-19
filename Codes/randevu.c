/*
* @randevu.c
* @Butun Randevu Islemlerinin Gerceklestiren Sinif
* @Odev 2
* @26.12.2019
* @Yunus Emre Atik - yunusemre.atik@stu.fsm.edu.tr
*/
#include <stdio.h>
#include "randevu.h"
#include <string.h>
void randevulari_Goster()
{
    FILE *file;
    file=fopen("randevular.txt","r"); //randevular.txt'yi read olarak actim
    if(file==NULL)
    {
        printf("Dosya Acilamadi\n");
    }
    else
    {
        fseek (file, 0, SEEK_END); // sona gidip dosyanin boyutunu elde ettim
        int boyut=ftell(file);
        rewind(file);			   // Tekrar dosyanin basina dondum
        printf("\t------------------------->RANDEVULAR<---------------------\n");
        while(!feof(file))
        {
            char a=fgetc(file);
            if(a==',')          //virgulle karsilasinca giriyor
            {
                fseek(file,-2,SEEK_CUR); // virgulden 2 geri gidip karakter elde ederse devam edecek
                char b=fgetc(file);
                printf("\t");
                if( !(b>'0' && b<'9') )
                {
                    printf(" Kisisinin ");
                    fseek(file,1,SEEK_CUR); // Geri gun cursor'una geliyor
                    switch (fgetc(file))
                    {
                        case '1':
                            printf(" Pazartesi Gunu\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n')) // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut) // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '2':
                            printf(" Sali Gunu\t\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '3':
                            printf(" Carsamba Gunu\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '4':
                            printf(" Persembe Gunu\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '5':
                            printf(" Cuma Gunu\t\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '6':
                            printf(" Cumartesi Gunu\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                        case '7':
                            printf(" Pazar Gunu\t\t");
                            fseek(file,1,SEEK_CUR);
                            printf("Saat ");
                            while((fgetc(file)!='\n'))  // Bosluk olmayana kadar donuyorum
                            {
                                if(ftell(file)==boyut)  // File'in sonuna gelir ise 1 kere yaziyor
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                    break;
                                }
                                else
                                {
                                    fseek(file,-1,SEEK_CUR);
                                    printf("%c",fgetc(file));
                                }
                            }
                             printf("'da randevusu vardir\n");
                             break;
                     }
                }
            }
            else // Eger virgul degil ise virgul olana kadar yaziyor.
            {
                printf("%c",a);
            }
        }
        fclose(file);
    }
    printf("\t------------------------->RANDEVULAR<---------------------\n");
    printf("\n");
}
void ada_Gore_Randevu_Ara(char isim[])
{
    FILE *file;
    file=fopen("randevular.txt","r"); // Randevular.txt'yi read olarak actim
    if(file==NULL)
    {
        printf("Dosya Açilamadi\n");
    }
    else
    {
        int bulunan_isim_sayisi=0;
        char karsilastirma_arrayi[100];
        int hata=0;

        while(!feof(file)) // file sonuna kadar
        {
                char satir_atlama_array[100];
                fscanf(file,"%s",karsilastirma_arrayi); // ilk stringleri yani isimleri aliyorum
                int len=strlen(isim);
                int i;
                for (i=0;i<len;i++)
                {
                    if((isim[i]!=karsilastirma_arrayi[i])) // isimleri karsilastiriyorum
                    {
                        hata++;
                    }
                }
                if(hata==0)
                {
                    bulunan_isim_sayisi++;
                    fseek(file,-len,SEEK_CUR);
                    fgets(satir_atlama_array,sizeof(satir_atlama_array),file); // 1 satir atlamak icin bos bir yere atiyorum
                    printf("\tEslesen Isim -->");
                    int atlama_Array_size=strlen(satir_atlama_array);
                    int o;
                    for (o=0;o<atlama_Array_size-1;o++) // bos array boyunca o satiri yaziyorum //
                    {
                        if(satir_atlama_array[o]==',')// virgule kadar yaziyoruz
                        {
                             printf("\t Kisisinin ");
                             o++;
                             switch (satir_atlama_array[o]) // gune geldik gun degerine gore gun atiyoruz
                             {
                                case '1':
                                 printf(" Pazartesi Gunu ");
                                 o+=2;                      // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size) // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                   o++;
                                 }
                                 else               // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                 break;
                                 case '2':
                                 printf(" Sali Gunu ");
                                 o+=2;                  // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                   o++;
                                 }
                                 else           // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                                 case '3':
                                 printf(" Carsamba Gunu ");
                                 o+=2;                  // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                 }
                                 else           // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                                 case '4':
                                 printf(" Persembe Gunu ");
                                 o+=2;                              // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                 }
                                 else               // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                                 case '5':
                                 printf(" Cuma Gunu ");
                                 o+=2;                              // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                 }
                                 else           // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                                 case '6':
                                 printf(" Cumartesi Gunu ");
                                 o+=2;                              // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                 }
                                 else           // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                                 case '7':
                                 printf(" Pazar Gunu ");
                                 o+=2;                      // gunden sonra 2 one gidip saate geliyoruz
                                 printf(" Saat ");
                                 if(o+2==atlama_Array_size)
                                 {
                                   printf("%c'da randevusu vardir\n",satir_atlama_array[o]);
                                 }
                                 else               // saatten sonra 1 fazlasi varsa sadece 2 tane yazar
                                 {
                                  printf("%c%c'da randevusu vardir\n",satir_atlama_array[o],satir_atlama_array[o+1]);
                                  o++;
                                 }
                                     break;
                             }
                        }
                        else{
                           printf("%c",satir_atlama_array[o]);  // eger virgul degilse satiri yazacak
                        }

                    }
                    fseek(file,-2,SEEK_CUR);//en sondan 2 geri gidip
                }
                fgets(satir_atlama_array,sizeof(satir_atlama_array),file); // o satiri satir_atlama'ya atiyoruz ve satir atliyoruz.
                hata=0;
        }
        if(bulunan_isim_sayisi==0) // isim sayisi bulunmamissa hata mesaji verecek
        {
             printf("Boyle Bir Isim Bulunmamaktadir\n");
        }
    }
    fclose(file); // dosyayi kapattik
}
void gune_Gore_Randevu_Ara(char gun[])
{

    FILE *file;
    file=fopen("randevular.txt","r"); // dosyayi read modda aciyorum
    if(file==NULL)
    {
        printf("Dosya Açilamadi\n");
    }
    else
    {
        int onceki_satir=0;
        int randevu_kontrol=0;
        while(!feof(file)) // file sonuna kadar sayiyorum
        {
            char satir[100];
            char a=fgetc(file);
            if(a=='\n') // satir sayilarini sayiyorum
            {
                onceki_satir=ftell(file); // bir onceki satira gitmek icin sayaca kaydediyorum
            }
            if(a==',') // virgul ise eger devam edecek
            {
                fseek(file,-2,SEEK_CUR);
                char b=fgetc(file);
                if( !(b>'0' && b<'9') )
                {
                    fseek(file,1,SEEK_CUR);
                    char z=fgetc(file);

                    if(gun[0]==z)       //eger gun elde ettigimiz saate esitse giriyor
                    {
                        randevu_kontrol++;
                        fseek(file,onceki_satir,SEEK_SET);
                        printf("\tEslesen Isim -->");

                        fgets(satir,sizeof(satir),file);    //tum satiri bir diziye aliyorum
                        int satir_lenght=strlen(satir);
                        int o;
                        for (o=0;o<satir_lenght-2;o++)  // satir uzunlugunun 2 eksigine kadar gidecek cunku sonda \n var
                        {
                            if(satir[o]==',')   //virgul ise eger
                            {
                                 printf("\t Kisisinin ");
                                 o++;
                                 switch (satir[o])  //  gune gore
                                 {
                                    case '1':
                                     printf(" Pazartesi Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)  // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                       printf("%c'da randevusu vardir",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                     printf("\n");
                                     break;

                                     case '2':
                                     printf(" Sali Gunu ");
                                     o+=2;           // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)  // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                       printf("%c da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                     break;

                                     case '3':
                                     printf(" Carsamba Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)  // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                     printf(" %c 'da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf(" %c%c 'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                     break;

                                     case '4':
                                     printf(" Persembe Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)  // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                       printf(" %c'da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                     break;

                                     case '5':
                                     printf(" Cuma Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)      // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                       printf("%c'da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                     break;

                                     case '6':
                                     printf(" Cumartesi Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)      // saatten sonra 2 fazlasi varsa sadece 1 tane yazar
                                     {
                                       printf("%c'da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                         break;

                                     case '7':
                                     printf(" Pazar Gunu ");
                                     o+=2;               // gunden sonra 2 one gidip saate geliyoruz
                                     printf(" Saat ");
                                     if(o+2==satir_lenght)
                                     {
                                       printf("%c'da randevusu vardir\n",satir[o]);
                                     }
                                     else
                                     {
                                      printf("%c%c'da randevusu vardir\n",satir[o],satir[o+1]);
                                      o++;
                                     }
                                     onceki_satir=ftell(file);
                                         break;
                                 }
                            }
                            else{
                               printf("%c",satir[o]);
                            }
                        }
                    }
                fseek(file,2,SEEK_CUR);
                }

            }
        }
        if(randevu_kontrol==0){
            printf("\tGirdiginiz gune ait bir randevunuz yoktur\n");
            printf("\tMenuye Yonlendiriliyorsunuz\n");
        }
        fclose(file);
    }
}
void randevu_Ver(char isim[],char soy_isim[],char gun[],char saat[])
{
    FILE *file;
    file=fopen("randevular.txt","r+");
    if(file==NULL)
    {
        printf("Dosya Acilamadi\n");
    }
    else
    {
        int sayac=0;
        int hata=0;
        int isim_var=0;
        int hata_1=0;
        int durum_0=0;
        int sonhata=0;
        int saat_len;
        char karsilastirma[100];
        char bos[100];
        fseek (file, 0, SEEK_END);
        int randevu_Ver_Boyut=ftell(file);
        if(randevu_Ver_Boyut==0)
        {
            durum_0++;
                        int isim_len=strlen(isim);
                        int soy_isim_len=strlen(soy_isim);
                        int gun_len=strlen(gun);
                        saat_len=strlen(saat);
                        int a,b,c,d;
                        for (a=0;a<isim_len;a++)
                        {
                            fputc(isim[a],file);
                        }
                        fputc(' ',file);
                        for (b=0;b<soy_isim_len;b++)
                        {
                            fputc(soy_isim[b],file);
                        }
                        fputc(',',file);
                        for (c=0;c<gun_len;c++)
                        {
                            fputc(gun[c],file);
                        }
                        fputc(',',file);
                        for (d=0;d<saat_len;d++)
                        {
                            fputc(saat[d],file);
                        }
            //fprintf(file,"\n%s %s,%s,%s",isim,soy_isim,gun,saat);
        }
        else
        {
            rewind(file);
            while(!feof(file))
            {
                fscanf(file,"%s",karsilastirma);
                int len=strlen(karsilastirma);
                int i;
                for (i=0;i<len;i++)
                {
                    if(isim[i]!=karsilastirma[i])
                    {
                        hata_1++;
                    }
                }
                if(hata_1==0)
                {
                    isim_var++;
                    printf("Ayni Isime Randevu Bulunmaktadir\n");
                    break;
                }
                hata_1=0;
                fseek(file,-2,SEEK_CUR);
                fgets(bos,sizeof(bos),file);
            }
            rewind(file);
            if(durum_0==0 && isim_var==0)
            {
                while(!feof(file))
                {
                    char a=fgetc(file);
                    if(a=='\n')
                    {
                        sayac=ftell(file);
                    }
                    if(a==',')
                    {
                        fseek(file,-2,SEEK_CUR);
                        char b=fgetc(file);
                        if( !(b>'0' && b<'9') )
                        {
                            fseek(file,1,SEEK_CUR);
                            char z=fgetc(file);

                            if(gun[0]==z)
                            {
                                fseek(file,1,SEEK_CUR);
                                char c=fgetc(file);     
								saat_len=strlen(saat);                       
                                if((saat_len==1) && (saat[0]==c))
                                {
                                    sonhata++;
                                    hata++;
                                }
                                if(saat_len==2){
                                	if(saat[0]==c){
                                		char k=fgetc(file);
                                		if(saat[1]==k){
                                			sonhata++;
                                			hata++;
										}
									}
									fseek(file,-2,SEEK_CUR);
								}
                                if(hata>0)
                                {
                                    fseek(file,sayac,SEEK_SET);
                                    printf("\tGirilen Tarih veya Saatte Randevunuz Bulunmaktadir. --> ");
                                    while(fgetc(file)!='\n')
                                    {
                                        if(ftell(file)==randevu_Ver_Boyut)
                                        {

                                            fseek(file,-1,SEEK_CUR);
                                            printf("%c",fgetc(file));
                                            break;
                                        }
                                        else
                                        {
                                            fseek(file,-1,SEEK_CUR);
                                            printf("%c",fgetc(file));
                                        }
                                    }
                                    sayac=ftell(file);
                                    printf("\n");
                                    hata=0;
                                }
                            }
                        fseek(file,2,SEEK_CUR);
                        }
                    }
                }
                if(sonhata==0)
                {
                    fseek(file,0,SEEK_END);
                    fprintf(file,"\n%s %s,%s,%s",isim,soy_isim,gun,saat);
                    fseek(file,0,SEEK_END);
                }
            }
        }


        fclose(file);
    }
}
void randevu_Sil_Isim_Kontrol(char isim[])
{
    FILE *file1;
    file1=fopen("randevular.txt","r");
    char karsilastirma[100];
    int hata=0;
    int a=0;
    int satir_kontrol=0;
        while(!feof(file1))
        {
                char bos[100];
                fscanf(file1,"%s",karsilastirma);
                satir_kontrol++;
                int len=strlen(isim);
                int len_kar=strlen(karsilastirma);
                int max=len>len_kar?len:len_kar;
                int i;
                for (i=0;i<max;i++)
                {
                    if(isim[i]!=karsilastirma[i])
                    {
                        hata++;
                    }
                }
                if(hata==0)
                {
                    a++;
                    fclose(file1);
                    randevu_Sil(satir_kontrol);
                    break;
                }
                fgets(bos,sizeof(bos),file1);
                hata=0;
        }
        if(a==0){
            printf("Bu Isimde Bir Hasta Bulunamamistir\n");
        }

    fclose(file1);
}
void randevu_Sil(int satir){
    FILE *file1,*file2;
    char bos[100];
    int temp=1;
    file1=fopen("randevular.txt","r");
    char ch;
    file2=fopen("replica.txt","w+");
    ch=getc(file1);
    while(ch!=EOF)
    {
        if(temp!=0)
        {
                if(ch=='\n')
                {
                    temp++;
                }
                if(temp!=satir)
                {
                    putc(ch,file2);
                }

            ch=getc(file1);
        }
    }

    fclose(file1);
    fclose(file2);
    file1=fopen("randevular.txt","w");
    file2=fopen("replica.txt","r");

       if(satir==1)
       {
            fgets(bos,sizeof(bos),file2);
       }
       ch=getc(file2);
       while(ch!=EOF)
       {
               fputc(ch, file1);
               ch = fgetc(file2);
       }

    rename("replica.txt","randevular.txt");
    fclose(file1);
    fclose(file2);
    char rep[]="replica.txt";
    remove(rep);
    printf("Randevu Basariyla Silinmistir\n");
}
