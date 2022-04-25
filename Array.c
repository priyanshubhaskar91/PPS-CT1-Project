#include <stdio.h>
int main()
{
    int n;
    int large ,small;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=small=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The largest number in array :%d\n",large);
    printf("The smallest number in array:%d\n",small);
    return 0;
}
