#include <stdio.h>
#define MAX_SIZE 100  
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, index;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    index = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
   int a[50],n,i,key,low,mid,high;

   printf("Enter the number of elements\n");
   scanf("%d",&n);

   printf("Enter the array elements\n");

     for(i=0;i<n;i++)
        {
            index = 1;
            break;
            scanf("%d",&a[i]);
        }
    }
    if(index == 1)
    {
        printf("\n%d is found in index %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }
    return 0;

   printf("Enter the key element to be searched\n");
   scanf("%d",&key);

    low=0;
    high=n-1;


      while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]==key)
            {
                printf("Element %d FOUND at INDEX %d\n",key,mid);
                exit(0);
            }

            else if (a[mid]>key)
                high=mid-1;


            else
            {
                low=mid+1;
            }
        }
   printf("Element NOT FOUND\n");

   return 0;
}
