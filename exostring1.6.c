#include <stdio.h>
#include <string.h>

int voyelleconsonne(char* str1);

int main(){
    char* tab="kaayakkkkkk";
    
    voyelleconsonne(tab);
}

int voyelleconsonne(char* str1){
    int voyelle=0;
    int consonne=0;

    for (int i = 0; str1[i]!=0; i++)
    {   
        switch (str1[i])
        {
        case 97:
            voyelle++;
            break;
        case 101:
            voyelle++;
            break;
        case 105:
            voyelle++;
            break;
        case 111:
            voyelle++;
            break;
        case 117:
            voyelle++;
            break;
        case 121:
            voyelle++;
            break;
        default:
            consonne++;
            break;
        }
        
    }
    printf("Il y a %d voyelle et %d consonne\n",voyelle,consonne);
}