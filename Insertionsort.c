#include<stdio.h>
int main()
{

    int array[100], i, j, n, temp;

    printf("Enter number of array elements: \n");
    scanf("%d", &n);

    printf("Enter %d number elemnts:\n", n);
    for(i = 0; i<n; i++)
    {

        scanf("%d", &array[i]);
    }

    for(i=1; i<n; i++){

        temp = array[i];
        j = i-1;

        while(j>=0 && array[j]>temp){

            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }

    printf("Sorted array is:\n");
    for(i = 0; i<n; i++){
        printf("%d\n", array[i]);
    }
}
