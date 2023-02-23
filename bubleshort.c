#include<stdio.h>
int main()
{
    int a[10], n, i, j;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i = 0; i<n; i++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    for( int l = 0; l<n; l++)
    {
        for( int k = 0; k<n-1; k++)
        {
            if(a[k]>a[k+1])

            {
                int temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }

    for(j = 0; j<n; j++)
    {

        printf("%d\t",a[j]);
    }
    return 0;
}



