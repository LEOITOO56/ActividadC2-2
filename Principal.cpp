#include<iostream>
#include<fstream>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
#include "colaboradores.h"    
int main() 
{
	
	int da, ma, aa, an, mn, dn, a,m , d;
	float peso,estatura,imc;
	Persona Kerly;
	int op,flag;

	do
	{
		cout<<"========================================================================"<<endl<<endl;
	cout<<"                     BIENVENIDO AL MENU DEL USUARIO\n";
	cout<<"                          - DATOS PERSONALES -"<<endl<<endl;
	cout<<"========================================================================"<<endl<<endl;
		cout<<"[1] Ingresar y mostrar los datos personales. \n";
		cout<<"[2] Calcular la edad de la persona. \n";
		cout<<"[3] Mostrar el indice de masa corporal. \n"; 
		cout<<"[4] Guardar archivo. \n";
		cout<<"[5] Recuperar los datos desde el archivo .txt y mostrarlos por pantalla. \n";
		cout<<"\n[0] Salir del menu. \n";
    	cout<<"\nPor favor ingrese una opcion : "; 
		cin>>op;
		system("cls");
		switch(op)
		{
			case 1:
			Kerly.ingresar();
			Kerly.mostrar();
			system("pause");
			break;
			
			cout<<"La edad que tiene es: ";
	    	case 2:
	    	cout<<"=============================================================="<<endl<<endl;
	cout<<"                    - CALCULO DE EDAD -\n";
	cout<<"\n==============================================================\n"<<endl<<endl;
	    	cout<<"Por favor ingrese la fecha actual (AA/MM/DD): "; 
        	cin>>aa>>ma>>da;
	    	Kerly.edad(aa,ma,da);
	    	Kerly.edad2();
			system("pause");
			break;
			
			case 3:
			Kerly.IMC(imc);
			system("pause");
			break;
			
			case 4:
			Kerly.guardar();
			system("pause");
			break;
			
			case 5:
	    	Kerly.rym();
	    	system("pause");
			break;
			
		}
		if(op>5)
		{
			cout << "Opcion no permitida!\n" <<  "Presione Enter para continuar\n";
   			// pause the program until user input
		    flag=cin.ignore().get();
		}		  
		if(op==0)
		{
			cout<<"Salimos del Sistema: "<<endl;
		}
	}		
	while(op!=0);
	system("pause");
	return (0);
}
