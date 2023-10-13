//Accept 2 number from user and display first number is second number time
// input: 12 5
//output: 12 12 12 12 12

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    // int int = 0; // Data type not use as a name.

    int iCnt = 0;

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d  ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iFrequency = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Frequency: ");
    scanf("%d",&iFrequency);

    Display(iValue,iFrequency);

    return 0;
}