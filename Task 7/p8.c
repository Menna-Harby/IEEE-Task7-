#include <stdio.h>


int main()
{
    int arr1[100], arr2[100];
    int i, N;

    printf("Enter the N of the array : ");
    scanf("%d", &N);
    
    printf("Enter elements of arr1 array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr1[i]);
    }


    for(i=0; i<N; i++)
    {
        arr2[i] = arr1[i];
    }

    
    printf("\nElements of arr2 array are : ");
    for(i=0; i<N; i++)
    {
        printf("%d,", arr2[i]);
    }

    return 0;
}
