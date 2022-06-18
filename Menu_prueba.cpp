#include<iostream>
using namespace std;
int main(){
	string vOpcion;
	int opcion;
	cout<<"Seleccione la compra que quiere realizar \n";
	cout<<"1. Camisetas 560.00lps\n2.Chaqueta 1200.00lps\n3. Abrigo de Cuero 1500.00lps\n4. Pantalon Corto 250.00lps\n5. Jeans Vaqueros 700.00lps \n";
	cin>>opcion;


switch(opcion){
case 1:
	float cantidad, precio, TotalPagar;
	
	cantidad=0;
	TotalPagar=0;
	precio=560;
	
	cout<<"\n Cantidad de Camisetas: ";
	cin>>cantidad;
	if(cantidad >= 5 && cantidad <5){
		TotalPagar= cantidad * precio;
	}
	else if(cantidad >=5 && cantidad <12){
		TotalPagar = cantidad * precio * 0.85;
	}
	else if(cantidad >=12){
			TotalPagar= cantidad * precio*0.70;
	}
	else{
		cout<<"\n"<<"La cantidad no puede ser negativa \n\n";
	}
	cout<<"\n"<<"Total a Pagar: "<<TotalPagar<<"\n\n";
	break;

case 2:
	float cantidad1, precio1, TotalPagar1;
	
	cantidad1=0;
	TotalPagar1=0;
	precio1=1200;
	
	cout<<"\n Cantidad de Chaquetas: ";
	cin>>cantidad1;
	if(cantidad1 >= 5 && cantidad1 <5){
		TotalPagar1= cantidad1 * precio1;
	}
	else if(cantidad1 >=5 && cantidad1 <12){
		TotalPagar1 = cantidad1 * precio1 * 0.85;
	}
	else if(cantidad1 >=12){
			TotalPagar1= cantidad1 * precio1*0.70;
	}
	else{
		cout<<"\n"<<"La cantidad no puede ser negativa \n\n";
	}
	cout<<"\n"<<"Total a Pagar: "<<TotalPagar1<<"\n\n";
	
	return 0;
}
}

