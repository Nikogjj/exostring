#include <stdio.h>

int main(){
    char texte[100]; // Je déclarer un tableau de char
    fgets(texte,sizeof(texte),stdin); // Je le rempli grace à fgets()
    
    printf("%s\n",texte);
    return 0;
}