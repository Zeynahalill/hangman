#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char kelimeler[][15]= {"kiraz", "karpuz" ,"elma","erik","üzüm","armut","portakal","çilek","vişne"};
    int HataSayisi=0;
    char HarfSayisi[20]; //kullanıcının gireceği harfler
    char Gorunen[20];
    int DogruSayisi=0;
    int KelimeSayisi=9;
    int i,j,k;
    char kelime[15];
    int OyunBitti=0;
    int Tamamlandi;// bu bir değişken
    char GirilenHarf;
     
    
    printf("Oyunumuza Hoşgeldiniz:)\n"); //karşılama mesajı
    printf("7 Hata Hakkınız Bulunmaktadır\n"); 
    srand(time(NULL));
    int RastgeleIndex= rand() % KelimeSayisi; //rand sayı döndürecek sonra o sayının toplamından kalanı 9a bölecek ve kelimesayısındaki sayıya dönüştürecek
    strcpy(kelime, kelimeler[RastgeleIndex]);
    
    int cizgiuzunluk = strlen(kelime);
    for(i=0;i<cizgiuzunluk;i++)
    {
        Gorunen[i]='_';
    }
   Gorunen[cizgiuzunluk]='\0';
   while(!OyunBitti){
    int yanlis=1;
    printf("Meyve Adı: ");
    for(j=0;j<cizgiuzunluk;j++){
        printf("%c ",Gorunen[j]);

    }
    
    printf("Harfini Girer Misin: ");
    scanf(" %c",&GirilenHarf);
    for(k=0;k<cizgiuzunluk;k++){
        if(kelime[k]==GirilenHarf && Gorunen[k]=='_'){
        Gorunen[k]=GirilenHarf;
       DogruSayisi++;
       yanlis=0;
 }
    }
    if(yanlis){
        HataSayisi++;
        printf("Yanlış Harf Girdiniz = Hata Sayınız %d",HataSayisi);// \7yap
    }

    Tamamlandi=1;//1 evet demek
    for(i=0;i<cizgiuzunluk;i++){
        if( Gorunen[i]=='_'){
            Tamamlandi=0;
            break;
        }
        
    }
    if(Tamamlandi){
        printf("Tebrikler Kelimeyi Doğru Buldunuz %s\n",kelime);
        OyunBitti=1;
    }
    else if(HataSayisi>=7){
        printf("Kaybettiniz, Doğru Kelime: %s\n",kelime);
        OyunBitti=1;
    }


   }

    return 0;
}
