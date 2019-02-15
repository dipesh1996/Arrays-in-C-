#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int Ary[3][3],counter;
 clrscr();
 for(int row=0;row<3;row++)
 {
	for(int col=0;col<3;col++)
	{
	 cout<<"enter value of Ary[" << row << "]["<<col<< "]";
	 cin>>Ary[row][col];
	}
 }

 for(row=0;row<3;row++)
 {
	for(int col=0;col<3;col++)
	{
		if(counter % 2 !=0)
		{
		cout<<Ary[row][col]<<"\n";
		counter++;
		}
		else
		{
		 counter++;
		}
	}
   //  cout<<"\n";
 }
 getch();
}