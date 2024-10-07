#include <stdio.h>

int main(){

    
    char tab[6][40]={
        "massi",
        "CHAOUCHI",
        "Bonjour",
        "Bonjour ca va ?",
        "anticonstitutionnellement",
        "intergouvernementalisations"};
        
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0;  tab[i][j] < 40; j++)
        {
            if (tab[i][j]>90)
            {
                tab[i][j]=tab[i][j]-32;
                
            }
            else{
                tab[i][j]=tab[i][j]+32;
            }
        }

            printf("%s-\n",tab[i]);
            
    }
    

  return 0;
}