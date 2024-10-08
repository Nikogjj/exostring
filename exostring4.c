#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 100

int main(){
    // Je déclare un tableau de char de 100 caratère
    char buf[BUF_SIZE];
    // Je le remplis avec fgets(), fgets rajoute un \0 à la fin pour en faire une string
    fgets(buf,BUF_SIZE,stdin);

    // Je convertis la string en interger avec atoi "24" deviens 24.
    int age = atoi(buf);
    if (age==0)
    {
        printf("Erreur. Vous ne pouvez pas avoir 0 an\n");
        fgets(buf,BUF_SIZE,stdin);
        age= atoi (buf);

    }
    if (age>=18)
    {
        printf("Majeur\n");
    }
    if (age <18)
    {
        printf("Mineur %d\n",age);
    }
    
    
    

    return 0;
}