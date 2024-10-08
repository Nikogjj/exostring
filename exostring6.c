#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 100

int mycompare(char* str1,char* str2){
    int egale=0;
    int i=0;
    while(str1[i]!=0){
        if (str1[i]!=str2[i])
        {
            egale=1;
        }else{}
            i++;
        
    }
    
    return egale;
}

int main() {
  char faction_humain[] = "Blliance";
  char faction_gnome[] = "Alliance";
  
  if(mycompare(faction_gnome,faction_humain) == 0){
    printf("Les string sont les mêmes");
  }else{
    printf("Les string ne sont pas les mêmes");
  }
  return 0;
}
