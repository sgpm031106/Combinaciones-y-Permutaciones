/*
Perez Moreno Sergio Gabriel
Estrucutras Computacionales Avanzadas
Agosto del 2022
*/

#include <iostream>

using namespace std;

int factorial(int dato);
int i;

int main()
{
	int n, r, total, n_r;
	
	cout<<"Inserte valor para n: ";
	cin>>n;
	
	cout<<"Inserte valor para r: ";
	cin>>r;
	
	n_r = n-r;
	
	total = factorial(n) / (factorial(n_r) * factorial(r));
	
	cout<<"El total de combinaciones es de: "<<total<<endl;
	
	return 0;
}

int factorial(int dato)
{
	int factorial = 1;
	for(i=1; i<=dato; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}
