/*

*/

#include <iostream>

using namespace std;

int main()
{
	int i, j, z, n;
	int x;
	char vector[100];
	
	cout<<"Ingrese cantidad de elementos del vector: ";
	cin>>n;
	
	for(x=0; i<n; i++)
	{
		cout<<"Ingrese elemento #"<<i+1<<": ";
		cin>>vector[i];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			for(z=j+1; z<n; z++)
			{
				cout<<vector[i]<<vector[j]<<vector[z]<<endl;
				
			}
		}
	}
}
