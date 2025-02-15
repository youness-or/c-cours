#include <stdio.h>
main()
{
 
 int nb,nt,essai=0;
 printf("_____GAME OF GUES THE NUMBER ______\n");
 printf("PLayer 1 entre the number: ");
 scanf("%d",&nt);
 printf("PLayer 2 geuss the number ");
 scanf("%d",&nb);
 while (nb!=nt && essai<=10)
 {
  if (nb<nt)
  {
    printf("The number you type is small than the number ");
  }
  else if (nb>nt)
  {
    printf("The number you type is biggerthan the number ");
  }
  
  
        printf("Entre the number agin: \n");
        scanf("%d",&nb);
        essai++;
    

 }
 if (nb == nt )
 {
    printf("Correct ! you win in attepmt number %i ",essai);

 }
 else if (essai>10)
 {
   printf("game over");
 }
 
 

 }

 
 