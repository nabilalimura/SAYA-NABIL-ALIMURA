#include <stdio.h>
#include <conio.h>
int main ()
{
    int x,y;

    printf("===================================================================\n");
    printf("MENGETAHUI LETAK KUADRAN DARI HASIL INPUT KOORDINAT TITIK X DAN Y \n");
    printf("===CREATED BY SYAHRI RAHMAT JURUSAN TEKNIK INFORMATIKA 311810526===\n");
    printf("===================================================================\n");

    printf("SILAHKAN MASUKKAN KOORDINAT TITIK X = "); scanf("%i",&x);
    printf("SILAHKAN MASUKKAN KOORDINAT TITIK Y = "); scanf("%i",&y);

    if (x>0 && y>0)
        printf("MAKA LETAK KUADRANNYA DI KUADRAN I");
    else if (x>0 && y<0)
    {
        printf("MAKA LETAK KUADRANNYA DI KUADRAN II");
    }
    else if (x<0 && y>0)
    {
        printf("MAKA LETAK KUADRANNYA DI KUADRAN III");
    }
    else
    {
        printf("MAKA LETAK KUADRANNYA DI TITIK PUSAT");
    }
getch ();
}
