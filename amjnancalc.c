#include <stdio.h>
main()
{
    int num1,num2;
    char op;
    printf("entre number: ");
    scanf("%d",&num1);
    printf("enter un op: (+,-,/,*) ");
    scanf("%s",&op);
    printf("entre number: ");
    scanf("%d",&num2);
    if (op =='+')
    {
        printf("%d",num1+num2);
    
    }
    else if (op =='-')
    {
        printf("%d",num1-num2);
    
    }
    else if (op =='*')
    {
        printf("%d",num1*num2);
    
    }
     else if (op =='/')
    {
        printf("%d",num1/num2);
    
    }
    else{
        printf("error");
    }
    

    

}