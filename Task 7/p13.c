#include <stdio.h>

int main() 
{
    int arr[100], n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    count = 0;
    for(i = 0; i < n; i++) 
    {
        for(j = i+1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
                break;
            }
        }
    }
    printf("The number of duplicate elements in the array is: %d\n", count);
    
    return 0;
}