#include<stdio.h>
int main()
{

    int array[100];
    int i, l, r, mid;
    int n, data;

    printf("Enter number of Array elements:\n");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for(i = 0; i<n; i++)
    {

        scanf("%d", &array[i]);
    }

    printf("Enter number you want to search:\n");
    scanf("%d",&data);


    l = 0;
    r = n-1;
 mid = (l+r)/2;

    while (l<= r)

    {
       mid = (l+r)/2;
        if(array[mid]< data)
        {

            l = mid+1;
        }
        else if(array[mid]> data)
        {

            r = mid-1;
        }
        else if(array[mid] == data)
        {
            printf("Data is found in %d index location.",mid);
            break;
        }

    }

    if(l>r)
    {
        printf("Data is not found!\n");

    }

}
