// C program for char count

#include <stdio.h>
void main()
{
    int c, i, j, a, first, last, middle, n, search, array[100], cnt, tmp;

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        tmp=i;
        for(j=tmp;j<n;j++)
        {
            if (array[tmp]==array[j])
            {
                cnt+=1;
                i++;
            }
        }
        i--;
        printf("%d: %d\n",array[tmp],cnt);
    }
}
