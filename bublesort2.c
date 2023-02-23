#include<stdio.h>
int main()
{
    int array[100],n, i;

    printf("Enter elements of array:\n");
    scanf("%d",&n);

    printf("Enter %d integer numbers: \n",n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", array[i]);
    }

    for(i = 0; i<n-1; i++){

        for(j = 0; j<n-i-1; j++){

            if(array[j]<array[j+1]){

                temp = array[j+1];
                array[j+1] = array[]

            }
        }
    }
}
