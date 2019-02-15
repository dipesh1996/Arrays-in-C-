#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int Ary[3][3];
 clrscr();
 for(int row=0;row<3;row++)
 {
	for(int col=0;col<3;col++)
	{
	 cout<<"enter value of Ary[" << row << "]["<<col<< "]";
	 cin>>Ary[row][col];
	}
 }

 cout<<"Matirx"<<"\n";
 for(row=0;row<3;row++)
 {
	for(int col=0;col<3;col++)
	{
	 cout<<Ary[row][col];
	}
     cout<<"\n";
 }

 cout<<"Transpose"<<"\n";
 for(row=0;row<3;row++)
 {
	for(int col=0;col<3;col++)
	{
	 cout<<Ary[col][row];
	}
     cout<<"\n";
 }
 getch();
}