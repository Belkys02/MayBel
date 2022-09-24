//Creado por: Belkys Burbano
#include<iostream>
using namespace std;
int main()
{
	int BMBG_i=0,BMBG_l;
	float BMBG_x,BMBG_s=0;
	cout<<"ingrese el limite BMBG_l="; cin>>BMBG_l;
	do{

	cout<<"ingrese el numero BMBG_x="; cin>>BMBG_x;
	BMBG_i=BMBG_i+1;
	BMBG_s=BMBG_s+BMBG_x;



	}while(BMBG_i<BMBG_l);
	cout<<"Se ingresaron "<<BMBG_l<<" numeros "<< "que sumaron "<<BMBG_s<<endl;
	return 0;
}
