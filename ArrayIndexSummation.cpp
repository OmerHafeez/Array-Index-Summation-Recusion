#include<iostream>
using namespace std;
int additionOfRollNumber(string rollnumber);
int FillArray(int arr[], int index, int calculatedNumber);
int main ()
{
	int arr[50];
	string r;
	int c,d;
	cout<<"Enter your Roll number "<<endl;
	cin>>r;
	c=additionOfRollNumber(r);
	cout<<"The Sum of Roll Number is :"<<c<<endl;
	for(int i=0;i<50;i++)
	{
		arr[i]=i+1;
	//	arr[i]=rand()%100;
	}
	
	d=FillArray(arr,50,c);
	cout<<"The sum of the numbers at the Multiple indexes are :"<<d;
}

int additionOfRollNumber(string rollnumber)
{
	int c=0;
	char rollno[9];
	for(int i=0;i<9;i++)
	rollno[i]=rollnumber[i];
//	cout<<rollno;
	for(int i=0;i<9;i++)
	{
		if(rollno[i]>=48 && rollno[i]<=57)
		c=c+(rollno[i]-48);
	}
	c=c/2;
	return c;
}

int FillArray(int arr[], int index, int calculatedNumber)
{
	int mult=0;
	if(index==0)
	return mult;
	else
	{
		if(index%calculatedNumber==0)
		mult=mult+arr[index-1];
	}
 return mult + FillArray(arr, index-1, calculatedNumber);
}