#include<stdio.h>


void swap_elements(int* first, int* second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}


int partition_function(int arr[], int l, int h)
{
	int p = arr[h];
	int i = (l - 1);

	for (int j = l; j <= h- 1; j++)
	{

		if (arr[j] < p)
		{
			i++;
			swap_elements(&arr[i], &arr[j]);
		}
	}
	swap_elements(&arr[i + 1], &arr[h]);
	return (i + 1);
}

void quick_sort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p_index = partition_function(arr, l, h);
		quick_sort(arr, l, p_index-1);
		quick_sort(arr,p_index+1,h);
		}
		}
		void print_array(int arr[],int len)
		{
		int i;
		for(i=0;i<len;i++)
		printf("%d",arr[i]);
		}
		int main()
		{
		int array[]={10,15,1,2,9,16,11};
		int length= sizeof(array)/sizeof(array[0]);
		printf("Before sorting the array:\n");
		print_array(array,length);
		printf("\n");
		printf("After sorting array:\n");
		quick_sort(array,0,length-1);
		print_array(array,length);
		return 0;

		}
