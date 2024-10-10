#include <stdio.h>
#include <string.h>

int souschaine(char* str1, char* str2);

int main(){
    char* tab1="BonjourNikojour";
    char* tab2="jour";
    printf("%d\n",souschaine(tab1,tab2));
    
}

int souschaine(char* str1,char* str2){
    int index=-1;
        for (int i = 0; i < strlen(str1) && index==-1; i++)
        // ou mettre un || mais alors il prendra que le deuxieme jour dans le mot//
        {
            printf("pspdpfj\n");
            if (str1[i]==str2[i-i])
            {
                for (int j=0; j < strlen(str2); j++)
                {
                    if (str1[i+j]==str2[j])
                    {
                        index=i;
                    }
                    else{
                        
                    }
                    
                }
                
            }
            else{

            }
            
        }
    return index;
}