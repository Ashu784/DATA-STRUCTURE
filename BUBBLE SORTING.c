#include<stdio.h>
int main()
{
int arr[100],n,x,y,swap;
printf("Enter the number of elements you want in array:\n");
scanf("%d",&n);
printf("Enter %d integers:\n",n);
for(x=0;x<n;x++)
    scanf("%d",&arr[x]);
for(x=0;x<n-1;x++)
{
    for(y=0;y<n-x-1;y++)
    {
        if (arr[y]>arr[y+1])
        {
            swap =arr[y];
            arr[y] =arr[y+1];
            arr[y+1] =swap;
        }
    }
}
printf("Sorted array in ascending order:\n");
for(x=0;x<n;x++)
    printf("%d\n",arr[x]);
return 0;
}
