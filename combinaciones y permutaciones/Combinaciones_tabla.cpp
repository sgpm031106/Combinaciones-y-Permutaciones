/*
Perez Moreno Sergio Gabriel
Estructuras Computacionales Avanzadas
Agosto del 2022
*/
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	
	char vector[100];
	int n, i, j;
	
	cout<<"¿Cuántos elementos tiene su vector? ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"Inserte letra #"<<i+1<<": ";
		cin>>vector[i];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(vector[i] != vector[j] && i <= j)
			{
				cout<<" - "<<vector[i]<<vector[j]<<" - "<<endl;
			}
		}
	}
}
