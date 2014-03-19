#include <stdio.h>
#include <stdlib.h>

int main()
{
    int balance[10];
    for (int i=0; i<5; i=i+1)
    {
        balance[i] = i;
        printf("%d\n", balance[i]);
    }
    
    for (int i=0;i<10;i++)
    {
        printf("%d\n", balance[i]);
    }
    return 0;
}
