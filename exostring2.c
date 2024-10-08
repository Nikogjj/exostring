#include <stdio.h>
#include <string.h>
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
        for (int j = 0;  tab[i][j]!=0; j++)
        {   
            
            // if (tab[i][j]>90)
            // {
            //     tab[i][j]=tab[i][j]-32;
                
            // }
            // else{
            //     tab[i][j]=tab[i][j]+32;
            // }
            switch (tab[i][j])
            {
                case 32:
                    tab[i][j]=32;
                    break;
                case 63:
                    tab[i][j]=63;
                    break;
                default:
                        if (tab[i][j]>90)
                    {
                        tab[i][j]=tab[i][j]-32;
                        
                    }
                    else{
                        tab[i][j]=tab[i][j]+32;
                    }
                break;
            }
        }
            printf("%s-\n",tab[i]);
            
    }
    

  return 0;
}