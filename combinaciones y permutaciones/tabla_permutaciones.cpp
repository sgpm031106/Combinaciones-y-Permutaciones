/*
P�rez Moreno Sergio Gabriel
Estructuras Computacionaes Avanzadas
Agosto del 2022
*/
#include <iostream>

using namespace std;

int main()
{
	char vector[100];
	int n;
	
	cout<<"Total de elementos de su vector: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Inserte #"<<i+1<<" letra: ";
		cin>>vector[i];
	}
	
	cout<<"\n";
	
	cout<<"Permutaciones sin repeticion. "<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(vector[i] != vector[j])
			{
				cout<<vector[i]<<vector[j]<<endl;
			}
		}
	}
	
	cout<<"\n";
}
