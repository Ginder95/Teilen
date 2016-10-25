
#include <stdio.h>
#include <stdlib.h>
#define anz 10

int main(int argc, char *argv[]) {
 //Variablen festlegen
 int zahlen[anz];
 int d, i, rest;

 //Zahlenabfrage und in array zahlen speichern
 for(d=0; d<anz; d++) {
   printf("Gebe die %d.te Zahl ein : ",d+1);//da d Null ist, würde die Schleife mit Zahl 0 beginnen
   scanf("%d",&zahlen[d]);
 }
 printf("\n\n");

 //ausgabeschleife
 for (i=0; i<anz;i++) {
   //pruefe ob ein rest nach der division besteht
   rest = zahlen[i] % 3;
   //Ausgabetxt festlegen
   if (rest == 0)
     {printf("%d ist durch 3 teilbar\n",zahlen[i]);}
    else
     {printf("%d ist nicht durch 3 teilbar\n",zahlen[i]);}
 }
 printf("\n\n");
 system("PAUSE");
 return 0;
}
