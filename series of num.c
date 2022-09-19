#include<stdio.h>
int main()
{
   int i,j,n,l;

    printf("\n\tEnter the number: ");
    scanf("%d",&n);

    printf("\n\tEnter the limit: ");
    scanf("%d",&l);

    printf("\n\tSeries of %d\n",n);
    printf("\t----------------\n");
    for(j=1; j<=l; j++)
    {
        printf("\n\t%d x %d = %d\n",n,j,n*j);
    }
}

