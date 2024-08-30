#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib> 

int main() {

    // Declaracion y definicion de variables.

    std::string nombres;
    std::string apellidos;
    std::string cargo;
    int costoHora;
    int horasLaboradas;


    // Declaracion de constantes de descuentos de ley.

    const double RENTA = 7.05;
    const double ISSS = 5.04;
    const int SEGURO_DE_VIDA = 12; 

	// Interfaz de entrada para que el usuario ingrese la información laboral necesaria.

    std::cout << "***********************************************************************************************" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "                           Calculo de Sueldo final de Empleado                           " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "***********************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Ingrese la siguiente informacion laboral:" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Nombres  :________________________\t4. Costo horas:  $_________" << std::endl;
    std::cout << "2. Apellidos:_______________________\t5. Horas laboradas:_____ horas" << std::endl;
    std::cout << "3. Cargo    :________________________" << std::endl;

	
	// Solicitar datos del usuario con posicionamiento del cursor usando secuencias ANSI.
	
	std::cout << "\033[9;14H"; // Fila 9, columna 14: Solicitar Nombres.
	std::getline(std::cin, nombres);
	
	std::cout << "\033[10;14H";  // Fila 10, columna 14: Solicitar Apellidos.
	std::getline(std::cin, apellidos);
	
	std::cout << "\033[11;14H"; // Fila 11, columna 14: Solicitar Cargo.
	std::getline(std::cin, cargo);
	
	std::cout << "\033[9;59H"; // Fila 9, columna 59: Solicitar Costo por hora.
	std::cin >> costoHora;
	
	std::cout << "\033[10;60H"; // Fila 10, columna 60: Solicitar Horas laboradas.
	std::cin >> horasLaboradas;


	// TODO: Hacer la logica de el calculo del sueldo Inicial. 
	double sueldoInicial;
	// TODO: Hacer la logica de el calculo del sueldo final. 
    double sueldoFinal;
	
  	// Pausa para que el usuario vea el texto antes de que se limpie la pantalla de la consola. 
  	
    system("pause");
    
    // Limpiar la pantalla
    
    system("cls");
    


    return 0;
}