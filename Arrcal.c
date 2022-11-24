// C program for array calculated

#include<stdio.h>
void main()
{
    int a[100],i,n,prd=1,sum=0;
    printf("Enter number of entries:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
        prd*=a[i];
    }
    printf("Sum of all entries is %d",sum);
    printf("\nProduct of all entries is %d",prd);
}
