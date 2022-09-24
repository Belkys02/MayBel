//Creado por: Belkys Burbano
#include<iostream>
using namespace std;
int main()
{
	int i=0,l;
	float x,s=0;
	cout<<"ingrese el limite l="; cin>>l;
	do{

	cout<<"ingrese el numero x="; cin>>x;
	i=i+1;
	s=s+x;



	}while(i<l);
	cout<<"Se ingresaron "<<l<<" numeros "<< "que sumaron "<<s<<endl;
	return 0;
}
