// C program for Linear search

#include <stdio.h>
void main()
{
    int n,a[100]={},i,srch,end=8,cnd=0;
    printf("Enter number of data entries:");
    scanf("%d",&end);
    for(i=0;i<end;i++)
    {
        printf(">");
        scanf("%d",&a[i]);
    }
    printf("The array contains %d elements.\n",end);
    printf("Search the array for:");
    scanf("%d",&srch);
    for(i=0;i<end;i++)
    {
        if(a[i]==srch)
        {
            printf("%d found at index=%d.",srch,i);
            cnd=1;
        }
    }
    if(cnd==0)
    {
        printf("%d not found.",srch);
    }
}
