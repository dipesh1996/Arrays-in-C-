#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int arr[5],temp;
 clrscr();
	for(int i=0;i<5;i++)
	{
	 cout<<"enter value of Ary[" << i << "]";
	 cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]<arr[i+1])
		{
			temp = arr[i];
			arr[i] =arr[i+1];
			arr[i+1] = temp;
		}
		else
			continue;
	}
	for(i=0;i<5;i++)
	{
		cout << "\nValue of arr["<< i << "] is " << arr[i];
	}
 getch();
}