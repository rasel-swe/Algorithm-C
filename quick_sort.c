//quick sort algorithm

#include<stdio.h>
void qsort(int number [100], int first, int last)
{

    int i, j, pivot, temp;
    if(first<last)
    {
        pivot = first;
        i = first;
        j = last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&& i<last)
                i++;
            while (number[j]>number[pivot])
                j--;
            if(i<j)
            {
                temp = number[i];
                number[i]= number[j];
                number [j] = temp;

            }
        }

        temp = number[pivot];
        number [pivot] = number[j];
        number[j] = temp;
        qsort(number, first, j-1);
        qsort(number,j+1,last);

    }
}
int main()
{

    int i, count, number[100];
    printf("Enter the number of elements we want  to sort: ");
    scanf("%d",&count);
    printf("Enter %d elements: ",count);
    for(i = 0; i<count; i++)
        scanf("%d",&number[i]);
    qsort(number,0,count-1);
    printf("The sorted elements: ");
    for(i=0; i<count; i++)
        printf("\t %d",number[i]);
    return 0;

}
