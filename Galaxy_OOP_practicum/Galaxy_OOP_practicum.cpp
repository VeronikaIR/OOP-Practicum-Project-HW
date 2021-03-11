#include <iostream>
#include <cstring>
#include "Jedi.hpp"
#include "Stormtrooper.hpp"
#include "Planet.hpp"



int main()
{/*
	Planet Mars { "Mars", "Milky way", "Republic of Macedonia" };
	Jedi Anakin { "Anakin", Rank::JediConsular, 12.1, Mars, "Spicies", "Comander" };
	Anakin.Print();
	*/

	char planet[32];
	char syst[32];
	char rep[32];

	std::cin.getline(planet, 32);
	std::cin.ignore();
	std::cin.getline(syst, 32);
	std::cin.ignore();
	std::cin.getline(rep, 32);
	std::cin.ignore();


	Planet p1{ planet, syst, rep };
	p1.Print();



	return 0;
}