#include<stdio.h>
int main()
{
    int array[100];
    int temp[100];
    int n, l, h, mid, k, i, j;


    printf("Enter number of array elements:\n");
    scanf("%d", &n);

    printf("Enter %d number of array :\n", n);
    for(i = 0; i<n; i++){

        scanf("%d", &array[i]);
    }

    for(i = 0; i<n; i++){

        i  = l;
        mid = (l+h)/2;
        j  = mid+1;
        k = l;

        while(i<= mid && j<= h){

            if(array[i]<= array[j]){
                temp[k] = array[i];
                i++;
                k++;
            }
            else{
                temp[k] = array[j];
                j++;
                k++;
            }

        }

        if(i>mid){

            while(j<=h){
                temp[k] = array[j];
                j++;
                k++;
            }
        }

        else{
            while(i<=mid){
                temp[k] = array[i];
                i++;
                k++;
            }
        }

        for(k = l; k<=h; k++){
            array[k] = temp[k];
        }
    }

    printf("Sorted arraylist:\n");
    for(i = 0; i<n; i++){
        printf("%d\n", array[i]);
    }


}
