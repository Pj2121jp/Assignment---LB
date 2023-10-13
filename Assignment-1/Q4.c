//Accept one number and check whether is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

//typedef int Bool
#define TRUE 1
#define FALSE 0

 bool Check(int iNo)
{
    if((iNo%5)==0)
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
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Devisible By 5");
    }
    else
    {
        printf("Not-Divisible by 5");
    }

    return 0;
}
