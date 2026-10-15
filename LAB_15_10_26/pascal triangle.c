#include<stdio.h>

int main()
{
    int n,i,j;
    int value;

    printf("Enter number of rows:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
       /* print space before each row */
       for(i=0;j<n-i-1;j++)
       {
           printf("   ");
       }

       value = 1;

       /* print value of the row */
       for(j=0;j<=i;j++)
       {
           printf("%d  ",value);

           value=value*(i-j)/(j+1);
       }
       printf("\n");
    }

    return 0;
}
