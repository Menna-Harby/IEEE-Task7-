#include <stdio.h>

int main()
{
    int arr[100];
    int i, N, num, pos;

    
    printf("Enter size of the array : ");
    scanf("%d", &N);

    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    
    if(pos > N+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", N);
    }
    else
    {
        
        for(i=N; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        
        arr[pos-1] = num;
        N++; 

       
        printf("Array elements after insertion : ");
        for(i=0; i<N; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}