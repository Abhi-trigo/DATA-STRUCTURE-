#include<stdio.h>
void main()
{
	int  size, insert, i, pos;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be insert : ");
	scanf("%d",&insert);
	printf("At which position (Enter index number) ? ");
	scanf("%d",&pos);
	for(i=size; i>pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=insert;
	printf("Element inserted successfully..!!\n");
	printf("Now the new array is : \n");
	for(i=0; i<size+1; i++)
	{
		printf("%d ",arr[i]);
	}}
