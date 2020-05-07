/*
 * recursion.cpp
 *
 *  Created on: 07-May-2020
 *      Author: Nitin
 */

#include<iostream>
using namespace std;

int fact(int );
int main(void)
{
	int no;
	int fact1;
	cout<<"Enter a no for factorial "<<endl;
	cin>>no;
	fact1=fact(no);
	cout<<"Factor= "<<fact1;
	return 1;
}

int fact(int x)
{
	//int total=1;
	if(x==1)
		return 1;
	else
		x=x*fact(x-1);

	return x;
}
