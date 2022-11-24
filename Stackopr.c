// C program for Stack Operation

#include <stdio.h>
void main()
{
    int stack[100]={1,2,3,4,5},tmp[100],op,cnt=4,i;
    char a[]="========";
    while (1==1)
    {
        printf("\n%s Operations %s",a,a);
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Show Stack");
        printf("\n4.Exit");
        printf("\nAction:");
        scanf("%d",&op);
        if(op==1)
        {
            printf("Enter Data:");
            scanf("%d",&stack[++cnt]);
            printf("%d pushed succesfully at index %d!",stack[cnt],cnt);
        }
        else if(op==2)
        {
            cnt--;
            for(i=0;i<cnt;i++)
            {
                tmp[i]=stack[i];
            }
            int stack[100]={};
        }
        else if(op==3)
        {
            for(i=0;i<=cnt;i++)
            {
                printf("%d ",stack[i]);
            }
        }
        else if(op==4)
        {
            break;
        }
    }
}
