
//	cout<<"";
//	cin>>"";
//  cout<<"\n";
//  {}

#include <iostream>
#include <conio.h>

using namespace std;

int variable, *salario, salarioalmes, *respuesta;
    
int main()
{
    cout<<"cuanto gana el trabajador en dolares a la semana ";
    
    cin>>variable;
    
    cout<<"\n";
    
    cout<<"el trabajador gana " << variable << " dolares a la semana ";
    
    cout<<"\n";
    
salario=&variable;
    
int salarioalmes = *salario*4;

respuesta=&salarioalmes;

cout<<"\n";

    cout<<"entonces el salario al mes del trabajador es "<< *respuesta <<" dolares";

    return 0;
}
