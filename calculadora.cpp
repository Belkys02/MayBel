//Programa que presenta las operaciones básicas
//Creado por Belkys Burbano 
//Fecha: 23-09-2022

#include<iostream>
using namespace std; 
int main()
{
	float x,y,s,m,d,r;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>x;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>y;
	s=x+y;
	m=x*y;
	d=x/y;
	r=x-y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<x<<" + "<<y<<" = "<<s<<endl;
	cout<<"Las multiplicacion de "<<x<<" * "<<y<<" = "<<m<<endl;
	cout<<"Las division de "<<x<<" / "<<y<<" = "<<d<<endl;
	cout<<"Las resta de "<<x<<" - "<<y<<" = "<<r<<endl;
	return 0;
}
