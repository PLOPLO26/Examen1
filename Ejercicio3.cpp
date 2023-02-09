/*Hacer un programa en c++ que muestre la tabla de multiplicar del numero ingresado por 
el usuiario.*/

#include <iostream>

using namespace std;

int num;

void PedirNum();
void MostrarTabla();

int main()
{
	PedirNum();
	MostrarTabla();
	return 0;
}

void PedirNum()
{
	cout<<"Ingrese un Numero para mostrar la tabla de multiplicar: "<<endl;
	cin>>num;
}

void MostrarTabla()
{
	cout << "Tabla de multiplicar del " << num << ":" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << num << " x " << i << " = " << num * i << endl;	
	} 	
}