#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre :");
    scanf("%d" , & n);
    for(int i = 2 ; i < n - 1; i++){
        if(n % i == 0){
            printf("C'est n'est pas un nombre premier .");
       break; }

        else{
            printf("C'est un nombre premier .");
        }
        break;
    }
    return 0;
}
