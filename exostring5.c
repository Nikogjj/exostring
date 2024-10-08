#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 100

int main(){
    // Je déclare un tableau de char de 100 caratère
    char buf[BUF_SIZE];
    printf("veuillez entrer votre taille en cm\n");
    // Je le remplis avec fgets(), fgets rajoute un \0 à la fin pour en faire une string
    fgets(buf,BUF_SIZE,stdin);

    // Je convertis la string en interger avec atoi "24" deviens 24.
    float taille=atof(buf);
        if (taille==0)
        {
            while (taille==0)
            {
            printf("Erreur veuillez rentrer des chiffres uniquement\n");
            fgets(buf,BUF_SIZE,stdin);
            taille=atof(buf);
                
            }
            

        }
        
        if (taille<=40 && taille!=0){
            while (taille<=40)
            {
                printf("Trop petit veuillez entrer une nouvelle\n");
                fgets(buf,BUF_SIZE,stdin);
                taille=atof(buf);
            }
        }
        if (taille>=140 && taille<=190)
        {
            printf("vous êtes autorisé : %.2f cm est autorisé\n",taille);
        }
        if (taille<140 && taille>40)
        {
            printf("Trop petit\n");
        }
        if (taille>190)
        {
            printf("tie tarpin grand c chaud la\n");
        }
        
            
        
        
    
    

    return 0;
}