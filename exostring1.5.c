#include <stdio.h>
#include <string.h>

int concatener(char* str1, char* str2, char* str3);

int main(){
    char* tab="Bonjour";
    char* tab1="Nikoooogsgfseedfsfgrfzefez";
    char tab2[10];
    memset(tab2+4,0,5);
    memset(tab2,1,5);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",tab2[i]);
    }
    return 0;
    concatener(tab,tab1,tab2);
    // char tab2[strlen(tab)+strlen(tab1)];
    // memset(tab2,0,sizeof tab2);
    // concatener(tab, tab1, tab2);
    printf("%s\n",tab);
    printf("%s\n",tab1);
    printf("%s\n",tab2);

}

int concatener(char* str1, char* str2, char* str3){

    int tailledesdeuxtab=strlen(str1)+strlen(str2);
    // printf("%d",tailledesdeuxtab);
    int j=0;
    int k=0;
    for (int i = 0; i<strlen(str1); i++)
    {
        str3[i]=str1[j];
        j++;
    }
    for (int i = strlen(str1); i <tailledesdeuxtab; i++) //demander pk "<" ca met des symbole bizarre et "<=" ca met rien
    {
        str3[i]=str2[k];
        k++;
    }
    

    
}