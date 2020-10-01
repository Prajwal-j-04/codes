#include <stdio.h>
#include <stdlib.h>
//Binary search
int i, n, key, mid, found=0, low=0;
int main()
{
    printf("Enter the value of n and key: \n");
    scanf("%d %d", &n, &key);
    int high=n-1, a[n];
    found=0;
    printf("Enter the elements in ascending order: \n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key<a[mid])
        {
            high=mid-1;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else if(key==a[mid])
        {
            printf("Found at location %d", mid);
            found=1;
            break;
        }
    }
    return 0;
}
