#include <iostream>
#include <conio.h>

using namespace std;
int data[10],data2[10];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void insertion_sort()
{
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
	cout<<"Masukkan Jumlah Array : "; cin>>n;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Bilangan ke- "<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	
	insertion_sort();
	cout<<"Data Setelah di Sort : ";
	for(int i=1; i<=n; i++)
	{
	  cout<<" "<<data[i];
	}
}
