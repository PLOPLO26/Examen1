/******************************************************************************
Hacer un programa que calcule la edad del usuario a partir de su fecha de 
nacimeinto (DIA, MES, AÑO).
@author Ximena Perez Lara Olvera
*******************************************************************************/
#include <iostream>
#include <ctime>

using namespace std;

int dia;
int mes;
int anio;
int edad;

void IntroduceFecha();
void CalcularTiempoEdad();
void MostrarEdad();

int main() 
{
    
    
    IntroduceFecha();
    CalcularTiempoEdad();
    MostrarEdad();
    
    return 0;
}

void IntroduceFecha()
{
	cout << "Introduce tu fecha de nacimiento (DIA MES ANIO): ";
    cin >> dia >> mes >> anio;
}

void CalcularTiempoEdad()
{
	time_t tiempo_actual = time(0);
    tm *fecha_actual = localtime(&tiempo_actual);
    
    edad = fecha_actual->tm_year + 1900 - anio;
	
	if (fecha_actual->tm_mon < mes - 1)
	{
		edad--;
	}else if(fecha_actual->tm_mon == mes - 1 && fecha_actual->tm_mday < dia)
	{
		edad--;
	}	
}

void MostrarEdad()
{
	cout << "Tienes " << edad << " anios." << endl;
}