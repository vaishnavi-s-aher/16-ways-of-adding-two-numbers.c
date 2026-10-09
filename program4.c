/*
    step 1: understand the problem statment
    step 2: write the algorritham
    step 3: Dicide the language
    step 4: wirte the code 
    step 5: test the program


*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 1: understand the problem statme
//         user is gpoing to enter any to number 
//         and get the out put

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//   step 2: write the algoeritham
/*

START
    Accept first number as no 1
    Acept secound number as no2
    create the varible as ans to store the result
    perform the addition and store into anss 
    Display the result from ans 
 END   

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 3: Dicide the language
//         We select c programming
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 4: write the program
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int main()
{
     int iValue1=0 , iValue2=0, iResult=0;

     printf("Enter first number : \n");
     scanf("%d",&iValue1);

     printf("Enter secound number : \n");
     scanf("%d",&iValue2);

     iResult= iValue1+iValue2;  // Bussiness logic
     
     printf("Addition is: %d\n",iResult);

    return 0;
}
