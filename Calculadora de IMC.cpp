#include <iostream>

using namespace std;

float a, p, IMC;
int main()
{
    cout<<"\n---CALCULADORA DE IMC---\n";
    cout<<"INGRESE SU PESO EN KG: \n";
    cin >> p;
    cout <<"INGRESE SU ALTURA EN MTRS \n";
    cin>>a;
    IMC=p/(a*a) ;
    cout<<"TU RESULTADO ES: "<<IMC;
    cout<< "\nVALORES\n";  
	cout<<"\nBajo peso: menos de 18.5\n"; 
	cout<<"Normal: entre 18.5 y 24.9\n";
	cout<<"Sobrepeso entre 25 y 29.9\n";
	cout<<"Obeso: 30 o mas";
	
    return 0;
}

