#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp, AorD;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("write (1) for ascending order or (2) for decending order: ");
    scanf("%d", &AorD);

    if(AorD == 1)
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Sorted array in ascending order: ");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if(AorD == 2)
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Sorted array in descending order: ");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Error number not valid");
    }

    return 0;
}