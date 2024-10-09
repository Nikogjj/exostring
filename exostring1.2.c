#include <stdio.h>
#include <string.h>

int compter(char* str1);

int main(){
    char* tab="Bonjok,fzek,fdm,fmmmqd,ur";
    compter(tab);
}

int compter(char* str1){
    int counter=0;
    for (int i = 0; str1[i] != 0; i++)
    {
        counter++;
    }
    printf("%d",counter);
    return counter;
}