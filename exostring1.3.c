#include <stdio.h>
#include <string.h>

int palindrome(char* str1);

int main(){
    char* tab="kayak";
    palindrome(tab);
}

int palindrome(char* str1){
    int j=strlen(str1);
    int palindrome;
    for (int i = 0; str1[i]!= 0; i++)
    {
        j--;
        if (str1[i]==str1[j])
        {
            // printf("le mot est un palindrome\n");
            palindrome=1;
        }
        else{
            // printf("le mot n'est pas un palindrome\n");
            palindrome=0;
            printf("le mot n'est pas un palindrome\n");
            return 0;
        }
    }
    if (palindrome==1)
    {
        printf("Le mot est un palindrome\n");
    }
    
    return palindrome;
}