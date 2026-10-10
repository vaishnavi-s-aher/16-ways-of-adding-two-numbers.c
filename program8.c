# include<stdio.h>
#include<stdlib.h>

int main()

{
   
    int no=0;

    printf("enter first number:\n");
    if( scanf("%d",&no) !=1)
    {

        printf("invalid input\n");

        return EXIT_FAILURE;
    }
        
    printf("Input is valid\n");

    
}
