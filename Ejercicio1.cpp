/******************************************************************************
Hacer un programa que pida 3 numeros y te diga cual es el mayor y cual es 
el menor.
Hecho por: Ximena Perez Lara Olvera
*******************************************************************************/

#include <iostream>

using namespace std;

int N1;
int N2;
int N3;

int numMayor;
int numMenor;

void PedirNumeros();
void MostrarNumeros();

int main()
{
	PedirNumeros();
	MostrarNumeros();
    return 0;
}

void PedirNumeros()
{
	cout<<"Numero 1: "<<endl;
	cin>>N1;
	
	cout<<"Numero 2: "<<endl;
	cin>>N2;
	
	cout<<"Numero 3: "<<endl;
	cin>>N3;
}

void MostrarNumeros()
{
	if(N1 > N2 && N1 > N3)
    {
        cout<<"El numero mayor es: "<<N1<<endl;
        
    }else if(N2 > N1 && N2 > N3)
    {
        cout<<"El numero mayor es: "<<N2<<endl;
    }else if(N3 > N1 && N3 > N2)
    {
        cout<<"El numero mayor es: "<<N3<<endl;
    }
    
    if(N1 < N2 && N1 < N3)
    {
        cout<<"El numero menor es: "<<N1<<endl;
    }else if(N2 < N1 && N2 < N3)
    {
        cout<<"El numero menor es: "<<N2<<endl;
    }else if(N3 < N1 && N3 < N2)
    {
         cout<<"El numero menor es: "<<N3<<endl;
    }
}