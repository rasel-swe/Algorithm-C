#include<stdio.h>
int main()
{

    int array[100], i, j, n, temp;

    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<n-1; i++)
    {

        for(j = 0; j<n-1-i; j++)
        {

            if( array[j]> array[j+1] )
            {

                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Sorted Array list in assending order:\n");
    for(i = 0; i<n; i++)
    {

        printf("%d\n", array[i]);
    }
    return 0;
}
