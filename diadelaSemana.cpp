#include <iostream>
using namespace std;

int main() {
	//practicando algoritmo
	
	int diaSemana;
	cout << "Ingresa el dia de la semana" << endl;
	cin >> diaSemana;
	
	// revisar el dia de la semana seleccionado
	
	if (diaSemana == 1)
		cout << "el dia ingresado corresponde al dia: domingo " <<endl;
	else if (diaSemana == 2)
		cout << "el dia ingresado corresponde al dia: lunes " <<endl;
	else if (diaSemana == 3)
		cout << "el dia ingresado corresponde al dia: martes " <<endl;
	else if (diaSemana == 4)
		cout << "el dia ingresado corresponde al dia: miercoles " <<endl;
	else if (diaSemana == 5)
		cout << "el dia ingresado corresponde al dia: jueves " <<endl;
	else if (diaSemana == 6)
		cout << "el dia ingresado corresponde al dia: viernes" <<endl;
	else if (diaSemana == 7)
		cout << "el dia ingresado corresponde al dia: sabado " <<endl;
	else 
		cout << diaSemana << "No corresponde a un dia de la semana" <<endl;	
	
	return 0;
}

