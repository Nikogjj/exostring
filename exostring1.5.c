#include <stdio.h>
#include <string.h>

int concatener(char* str1, char* str2, char* str3);

int main(){
    char* tab="Bonjkfzel,four";
    char* tab1="Mem,jfz,lùcaaaaaaaaa";
    char* tab2;
    concatener(tab, tab1, tab2);
    printf("%s\n",tab);
    printf("%s\n",tab1);
    printf("%s\n",tab2);

}

int concatener(char* str1, char* str2, char* str3){
    int tailledesdeuxtab=strlen(str1)+strlen(str2);
    int j=0;
    int k=0;
    for (int i = 0; i<strlen(str1); i++)
    {
        str3[i]=str1[j];
        j++;
    }
    for (int i = strlen(str1); i <=tailledesdeuxtab; i++) //demander pk "<" ca met des symbole bizarre et "<=" ca met rien
    {
        str3[i]=str2[k];
        k++;
    }
    

    
}