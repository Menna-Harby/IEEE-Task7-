#include <stdio.h>


int main()
 {
    int arr[100], i, largest, secondLargest, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    scanf("%d", &arr[0]);

                 
    largest = arr[0];                     //  // largest = secondlaegest = INT_MIN;   , #include <limits.h> // For INT_MIN
    secondLargest = arr[0];    


    for(i = 1; i < n; i++) 
    {
        scanf("%d", &arr[i]);

        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        
        else if(arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}