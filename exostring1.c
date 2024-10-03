#include <stdio.h>
#define TAILLE 6

// int main(){
//     char prenom[TAILLE] = {'M','a','s','s','i',0};

//     for(int i = 0;i < TAILLE;i++){
//         printf("%c",prenom[i]);
//     }
//     return 0;
// }

int main(){
    char prenom[TAILLE]={'M','a','s','s','i','0'};
    int i=0;
    while(prenom[i]!=0){
        putchar(prenom[i]);
        i++;
    }
    return 0;
}