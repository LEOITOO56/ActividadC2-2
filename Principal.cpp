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
	Persona PEPE;
	int op,flag;

	do
	{
		cout<<"||----Datos Personales----||"<<endl<<endl;
		cout<<"1.-Ingresar y mostrar los datos personales \n";
		cout<<"2.-Calcular la edad de la persona \n";
		cout<<"3.-Mostrar el indice de masa comporal \n "; 
		cout<<"4.-Guardar archivo \n";
		cout<<"5.-Recuperar los datos desde el archivo txt y mostrarlos por pantalla \n";
		cout<<"0.-Salir del menu \n";
    	cout<<"Por favor ingrese una opcion : "; 
		cin>>op;
		system("cls");
		switch(op)
		{
			case 1:
			PEPE.ingresar();
			PEPE.mostrar();
			system("pause");
			break;
			cout<<"La edad que tiene es:";
	    	case 2:
	    	cout<<"-----||CALCULO DE EDAD||-----"<<endl;	
	    	cout<<"Por favor ingrese la fecha actual (AA/MM/DD): \n"; 
        	cin>>aa>>ma>>da;
	    	PEPE.edad( aa,ma,da);
	    	PEPE.edad2();	
			system("pause");	
			break;
			case 3:
			PEPE.IMC(imc);
			system("pause");
			break;
			case 4:
			PEPE.guardar();
			system("pause");
			break;
			case 5:
	    	PEPE.rym();
	    	system("pause");
			break;
		}
		if(op>5)
		{
			cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
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
