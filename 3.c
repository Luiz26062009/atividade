

#include <stdio.h>

int main()
{
     int ano;
    
     scanf("%d", &ano);
    
     if(((ano% 4 == 0) && !(ano % 100 == 0))||(ano% 400 == 0 )){
     
     printf("bissexto");
    
     }else{
     
         printf("não foi ano bissexto");
    }

    return 0;
}