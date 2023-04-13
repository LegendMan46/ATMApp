#include <stdio.h>
#include <stdlib.h>

int main(){
    int secim=1;
    int yatirilacakTutar;
    int cekilecekTutar;
    int bakiye=1000;

    while (secim)
    {
        printf("1-Bakiye Miktari\n");
        printf("2-Para Yatir\n");
        printf("3-Para Cek\n");
        printf("0-Cikis\n");
        printf("Lutfen Bir Secim Yapiniz : ");
        scanf("%d",&secim);
        switch(secim){
        case 0:
            break;
        case 1:
            printf("Bakiyeniz : %d\n TL",secim);
            break;
        case 2:
            printf("Kac TL yatirmak istersiniz? ");
            scanf("%d",&yatirilacakTutar);
            bakiye += yatirilacakTutar;
            break;
        case 3:
            printf("Kac TL cekmek istiyorsunuz? ");
            scanf("%d",&cekilecekTutar);
            bakiye -= cekilecekTutar;
            break;
        default:
            printf("Gecersiz bir secim yaptiniz.");
            break;
        }
        }
    return 0;
}