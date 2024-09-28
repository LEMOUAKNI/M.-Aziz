#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("saisir votre age :");
    scanf("%d",&i);
    if(i<18){
        printf("vous n'etes pas eligible pour voter .");

    }
    if(i>=18){
        printf("vous etes eligible pour voter .");
    }
    return 0;
}
