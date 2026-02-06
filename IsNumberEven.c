#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    unsigned long ulNumber;
    system("cls");
    printf("Input an integer positive number\r\n");
    scanf("%lu", &ulNumber);
    if (ulNumber % 2 == 0)
        printf("The number is even\r\n");
    else
        printf("The number is odd\r\n");
    getchar();
    getc(stdin);
    return 0;
}
