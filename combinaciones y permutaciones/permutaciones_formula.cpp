/*
Perez Moreno Sergio Gabriel
Estructuras Computacionales Avanzadas
Agosto del 2022 
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	int r;
	long nfactorial = 1;
	long n_rfactorial = 1;
	int n_r;
	long total;
	
	cout<<"Valor de n: ";
	cin>>n;
	
	cout<<"Valor de r: ";
	cin>>r;
	
	for(int i=1; i<=n; i++)
	{
		nfactorial = nfactorial * i;
	}
	
	n_r = n-r;
	
	for(int i=1; i<=n_r; i++)
	{
		n_rfactorial = n_rfactorial * i;
	}
	
	total = nfactorial/n_rfactorial;
	
	cout<<"El total de permutaciones es de: "<<total<<endl;
}
