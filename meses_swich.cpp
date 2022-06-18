#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Seleccione el mes que desea ver la festividada \n";
	cout<<"1. enero\t2.febrero\t3. marzo\t4. abril\t5. mayo\t6. junio\t7. julio\t8. agosto\t9. septiembre\t10. octubre\t11. noviembre\t12. diciembre\t";
	cin>>opcion;
	
	switch (opcion){
	case 1: 
		cout<<"El 01 de enero se celebra Año Nuevo \n";
			break;
	case 2: 
		cout<<"El 14 de febrero se celebra San Valentin \n";
			break;
	case 3: 
		cout<<"El 19 de marzo Dia del Padre \n";
			break;
	case 4: 
		cout<<"El 22 de marzo se celebra el Dia de la Tierra \n";
			break;
	case 5: 
		cout<<"El 30 de mayo se celebra el Dia del Arbol \n";
			break;
	case 6: 
		cout<<"11 de junio se celebra el Dia del Estudiante \n";
			break;
	case 7: 
		cout<<"14 de julio se celebra Dia de la Hondureñidad \n";
			break;
	case 8: 
		cout<<"5 de agosto Dia Internacional del Gato \n";
			break;
	case 9: 
		cout<<"15 de septiembre se celera el Dia de la Independencia patria \n";
			break;
	case 10: 
		cout<<"3 de octubre Dia del Soldado \n";
			break;
	case 11: 
		cout<<"22 de noviembre se celebra el nacimiento de Jose Cecilio del Valle \n";
			break;
	case 12: 
		cout<<"31 de diciembre se celebra Fin de Año \n";
			break;
	default:
			cout<<"Valor invalido \n";
			break;
	}
	return 0;
}
