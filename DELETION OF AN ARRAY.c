#include<stdio.h>
int main()
{ int arr[50],size,pos,i;
      printf("Enter the number of an elements in an array:\n");
      scanf("%d",&size);
      printf("Enter %d element in an array:\n",size);
 for(i=0;i<size;i++)
 {
      printf("arr[%d]=i");
      scanf("%d",&arr[i]);
    }
      printf("Define the position of an array element where you want to delete:\n");
      scanf("%d",&pos);
 if(pos>=size+1)
 {    printf("Deletion is not possible in an array\n");
 }
else
{
for(i=pos-1;i<size-1;i++)
{
arr[i]=arr[i+1];
}
      printf("The resultant array is:\n");
for(i=0;i<size-1;i++)
{
     printf("arr[%d]=i");
     printf("%d\n",arr[i]);
}
}
return 0;

}
