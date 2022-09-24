//Programa que presenta las operaciones básicas
//Creado por Belkys Burbano 
//Fecha: 23-09-2022

#include<iostream>
using namespace std;
int main()
{
	float BMBG_x,BMBG_y,BMBG_s,BMBG_m,BMBG_d,BMBG_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de BMBG_x=:";
	cin>>BMBG_x;
	cout<<"Ingrese en valor de BMBG_y=:";
	//Operaciones 
	cin>>BMBG_y;
	BMBG_s=BMBG_x+BMBG_y;
	BMBG_m=BMBG_x*BMBG_y;
	BMBG_d=BMBG_x/BMBG_y;
	BMBG_r=BMBG_x-BMBG_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<BMBG_x<<" + "<<BMBG_y<<" = "<<BMBG_s<<endl;
	cout<<"Las multiplicacion de "<<BMBG_x<<" * "<<BMBG_y<<" = "<<BMBG_m<<endl;
	cout<<"Las division de "<<BMBG_x<<" / "<<BMBG_y<<" = "<<BMBG_d<<endl;
	cout<<"Las resta de "<<BMBG_x<<" - "<<BMBG_y<<" = "<<BMBG_r<<endl;
	return 0;
}
