#include <stdio.h>


int main()
{
    int arr[100];
    int size, i, arrIndex, revIndex;
    int temp;

 
    printf("Enter size of the array: ");
    scanf("%d", &size);

   
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;

    while(revIndex < arrIndex)
    {
        
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;
        
        revIndex++;
        arrIndex--;
    }

   
    printf("\nReversed array : ");
    
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}