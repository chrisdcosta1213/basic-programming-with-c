#include<stdio.h>
int main()
{
	int arr[]={55,66,77,22,11,52,19};
	int key=19;
	int i,n=7;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("\n The value %d found at index %d",key,i);
		}
	}
	printf("\n Element not found");
	return 0;
}
