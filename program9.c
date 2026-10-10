

# include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
//
//  Function Name:        :Addition
//  Input:                : Integer, Integer
//  output:               : Integr
//  Discription:          : Perfoms Addition
//  Date:                 : 04/10/2026
//  Author:               : Vaishnavi Shivaji Aher
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Addition (
                    int ino1 ,  // First input
                    int ino2   //  Secound input
             )
{

     int iAns=0;

     iAns = ino1+ino2; // // Bussiness logic

     return iAns;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entery point of the application 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
     int iValue1=0 , iValue2=0, iResult=0;

     printf("Enter first number : \n");
     if(scanf("%d",&iValue1) !=1)
     {
        fprintf(stderr,"unable to proccrd input is invalid\n");

        return EXIT_FAILURE;
     }

     printf("Enter secound number : \n");
     if(scanf("%d",&iValue2) !=1)
     {
        fprintf(stderr,"unable to proccrd input is invalid\n");

        return EXIT_FAILURE;
     }

     iResult =Addition(iValue1,iValue2);

    
     
     printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS ;
}
