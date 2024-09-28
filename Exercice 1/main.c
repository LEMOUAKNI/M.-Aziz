#include <stdio.h>
#include <math.h>

int main()
{
   int longueur , largeur , aire , perimetre ;
   printf("Entrer la longueur :");
   scanf("%d",&longueur);
   printf("Entrer la largeur :");
   scanf("%d", &largeur);

   aire  = longueur * largeur;
   printf("aire : %d\n",aire);

   perimetre = 2 * (longueur + largeur );
   printf("perimetre : %d", perimetre);

    return 0;
}
