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
		for(j=0; j<n; j++)
		{
			for(z=0; z<n; z++)
			{
				if(vector[i] != vector[j] && vector[j] != vector[z] && vector[i] != vector[z])
				{
					cout<<vector[i]<<vector[j]<<vector[z]<<endl;
				}
			}
		}
	}
}
