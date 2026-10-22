////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : Display
//      Description   : It is used to display asterisks
//      Input : Integer
//      Output : "*"
//      Author : Sanjana Vinod Hiwrale
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo -- ;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}

