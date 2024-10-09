#include <stdio.h>
#include <string.h>

void remplacer(char* str1,char a,char b);

int main(){
    char tab[]="kayak";
    char a='a';
    char b='b';
    remplacer(tab, a, b);
    printf("%s\n",tab);
}

void remplacer(char* str1, char a, char b){
    
    for (int i = 0; str1[i]!=0; i++)
    {   
        if (str1[i]==a)
        {
            str1[i]=b;
        }
        else{

        }
        
    }
}