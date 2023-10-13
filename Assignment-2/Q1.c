//Accept no form user and print * 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enrer number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

