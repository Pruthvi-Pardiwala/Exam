//Switch statement of displaying Monday to Saturday.
#include<stdio.h>
void main()
{
    int a;

    printf(" Enter the number :- ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("The day is Monday ");
        break;
    case 2:
        printf("The day is Tuesday ");
        break;
    case 3:
        printf("The day is Wedenday ");
        break;
    case 4:
        printf("The day is Thusday ");
        break;
    case 5:
        printf("The day is Friday ");
        break;
    case 6:
        printf("The day is Saturday ");
        break;
    case 7:
        printf("The day is Sunday ");
        break;
    default:
        break;
    }
}