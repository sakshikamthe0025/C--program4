/*
  Step 1: understand the problem statement
  Step 2: write the algorithm
  Step 3: decide the programming language
  Step 4: write the program
  Step 5: test the program
*/

/////////////////////////////////////////////////////////
//
//  step 1 : understand the problem statement 
//           user is going to enter any two integers
//           and we have to perform addition
// 
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
//  step 2 : write the program
/*     
    START
        Accept first number as No1
        Accept second number as No2
        create the variable as Ans to store the result
        perform the addition and store in Ans
        Display the result from Ans
    END
*/
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
//  step 3 :  Decide the programming language  
//            we select C programming
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
//  step 4 : write the program
//
/////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;    //Business logic

    printf("%d\n",iResult);

    return 0;
}


