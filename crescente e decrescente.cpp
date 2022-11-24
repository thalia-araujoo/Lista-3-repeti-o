#include <stdio.h>
 
int main() {
 
    int X,Y;
  scanf("%i %i",&X,&Y);
  
  do{

  if(X<Y)
    printf("Crescente\n");
else
    printf("Decrescente\n");
  scanf("%i %i",&X,&Y);
}
   while(X!=Y); // while deve ser usado sempre em q nao soubermos a quantidade de vezes q deverá ser repetido//
                // aqui ele diz q repita ate q x seja diferente de y//
    return 0;
    
}
