// Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet==TRUE)
    {
        printf("%d is a Even number",iValue);
    }
    else
    {
        printf("%d is a odd number",iValue);
    }


    return 0;
}

