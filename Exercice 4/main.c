#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n , max , min ;
    printf("Entre la talle du tableaux :");
    scanf("%d",&n);
    int T[5]={};
    for(int i = 0 ; i < n ; i++){
    printf("Entrer un nombre :");
    scanf("%d",&T[i]);
    }
    max = T[0];
    for (int i = 0 ; i < n ; i++){
    if(max<T[i]){
    max = T[i];
    }
    }
    printf(" Le plus grand : %d\n ", max);
    min = T[0];
    for(int i = 0 ; i< n ; i++){
    if(min > T[i]){
    min = T[i];
    }
    }
    printf("Le plus petit : %d ", min);
    return 0;
}
