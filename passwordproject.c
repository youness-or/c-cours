#include<stdio.h>
#include<string.h>
main()
{
    printf("*----Welcome to the password guess----*\n");
    printf("Type 'exit' to exit the program\n");
    do
    {
        char password[]="123456789";
        char input_user[10];
    printf("entre youre password: ");
    scanf("%s",&input_user);
    if (!strcmp(input_user,password))
    {
        printf("succes ");
        
        break;
    }
    else{
        printf("oops!! try again(:\n");
    }
    if (!strcmp(input_user,"exit"))
    {
        break;}

        
    } while (1);
    
    return 0;
    
}