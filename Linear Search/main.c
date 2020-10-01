#include <stdio.h>
#include <stdlib.h>
//Linear search
int i,n,ele,found=0;
int main()
{
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
            printf("Enter the element to be searched: \n");
    scanf("%d", &ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("Found at location=%d", i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("Not found");

    }
    return 0;
}
