#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milli_seconds)
{
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main()
{
    char giris[] = "SAYIN SAKINLER HEPINIZ HOSGELDINIZ";
    for(int a = 0; a < 20; a++)
    {
        for(int b = 0; b <= a; b++)
        {
            printf("%c",giris[b]);
        }
        delay(30);
        if(a != 19)
            system("cls");
    }
    return 0;
}
