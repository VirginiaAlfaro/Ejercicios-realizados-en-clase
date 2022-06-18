#include<iostream>
using namespace std;
int main(){
	float sueldo, SueldoAcumulado=0; 
	float promedio;
	int i;
		for ( i=0; i<10; i++){	
	cout<<"Ingrese su sueldo: "<<endl;
	cin>>sueldo;
	SueldoAcumulado = SueldoAcumulado + sueldo;
}
promedio = SueldoAcumulado/i;

	cout<<"El promedio de los sueldos es: "<<promedio<<endl;

	return 0;

}
