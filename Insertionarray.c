// C program for implementation of Insertion array

void main()
{
    int n,a[100]={1,24,75,23,45,98,54,12},i,x,end=8;
    printf("Original Array:");
    for(i=0;i<end;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter a number:");
    scanf("%d",&n);
    printf("Enter index location:");
    scanf("%d",&x);
    for(i=end-1;i>=x;i--)
    {
        a[i+1]=a[i];
    }
    a[x]=n;
    printf("New Array:");
    for(i=0;i<=end;i++)
    {
        printf("%d ",a[i]);
    }
}
