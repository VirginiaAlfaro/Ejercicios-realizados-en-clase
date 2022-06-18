/*Elaborar un programa que me permita ingresar un numero, del 1 al 7
y muestre que dia de la semana es */

#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Ingrese un numero del 1 al 7 para identificar el dia de la semana: \n";
	cin>>opcion;
	
	switch (opcion){
		case 1:
			cout<<"Seleccionastes el dia Lunes \n";
			break;
		case 2:
			cout<<"Seleccionastes el dia Martes \n";
			break;
		case 3:
			cout<<"Seleccionastes el dia Miercoles \n";
			break;
		case 4:
			cout<<"Seleccionastes el dia Jueves \n";
			break;
		case 5:
			cout<<"Seleccionastes el dia Viernes \n";
			break;
		case 6:
			cout<<"Seleccionastes el día Sabado \n";
			break;
		case 7:
			cout<<"Seleccionastes el día Domingo \n";
			break;
			
		default:
			cout<<"Valor invalido \n";
			break;
	}
	
	return 0;
}
