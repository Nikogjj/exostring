#include <stdio.h>

int main(){

    char str1[6] = "massi";
    char str2[11] = "CHAOUCHI";
    char str3[8] = "Bonjour";
    char str4[17] = "Bonjour ca va ?";
    char str5[26] = "anticonstitutionnellement";
    char str6[28] = "intergouvernementalisations";
    char tab[6][30]={
        "massi",
        "CHAOUCHI",
        "Bonjour",
        "Bonjour ca va ?",
        "anticonstitutionnellement",
        "intergouvernementalisations"};
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 30; i++)
        {
            tab[i][j];
            if (tab[i][j]>90)
            {
                /* code */
            }
            
        }
        printf("%s\n",tab[i]);
            
    }
    

  return 0;
}