#include <stdio.h>
#include <string.h>

int souschaine(char* str1, char* str2);

int main(){
    char tab[]="kayakkkkkk";
    char tab1[]="aya";
    souschaine(tab,tab1);
    printf("%s\n%s\n",tab, tab1);
}

int souschaine(char* str1, char* str2){
    int j=0;
    int compteur=0;
    for (int i = 0; str1[i]!=0; i++)
    {
        compteur++;
        if (str1[i]==str2[j])
        {
            for (int i = 0; str2[i] !=0 ; i++)
            {
                str1[i]=str2[j];
            }
            
        }
        else{}   
    }
    return compteur;
}