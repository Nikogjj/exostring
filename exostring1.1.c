#include <stdio.h>
#include <string.h>

int inversestring(char* str1, char* str2);

int main(){
    char* tab="Bonjour";
    char* tab2;
    inversestring(tab,tab2);
}

int inversestring(char* str1,char* str2){
    int i=0;
    int j=strlen(str1);
    printf("%ld\n",strlen(str1));
    for ( i ; i<=strlen(str1); i++)
    {
        j--;
        str2[j]=str1[i];
    }
    printf("%s,%s\n",str1,str2);
    
}