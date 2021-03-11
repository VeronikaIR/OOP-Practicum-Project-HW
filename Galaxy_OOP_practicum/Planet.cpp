#include "Planet.hpp"
#define _CRT_SECURE_NO_WARNINGS

void Planet:: strcpy_p(char* firstText, const char* secondText) {
	int i = 0;
	do {
		firstText[i] = secondText[i];
		i++;
	} while (secondText[i] != '\0');
}

Planet::Planet(const Planet& other) {
	this->name = new char[strlen(other.name) + 1];
	strcpy_p(this->name, other.name);
	this->planetSystem = new char[strlen(other.planetSystem) + 1];
	strcpy_p(this->planetSystem, other.planetSystem);
	this->republic = new char[strlen(other.republic) + 1];
	strcpy_p(republic, other.republic);
}

Planet::~Planet() {
	delete[]name;
	delete[]planetSystem;
	delete[]republic;
}

Planet& Planet::operator=(const Planet& other) {
	if (this != other) {
		delete[]name;
		this->name = new char[strlen(other.name) + 1];
		strcpy_p(this->name, other.name);
		delete[]planetSystem;
		this->planetSystem = new char[strlen(other.planetSystem) + 1];
		strcpy_p(this->planetSystem, other.planetSystem);
		delete[]republic;
		this->republic = new char[strlen(other.republic) + 1];
		strcpy_p(republic, other.republic);
	}
	return *this;
}

Planet::Planet(char* _name, char* _planetSystem, char* _repulic) {
	this->name = new char[strlen(_name) + 1];
	strcpy_p(this->name, _name);
	this->planetSystem = new char[strlen(_planetSystem) + 1];
	strcpy_p(this->planetSystem, _planetSystem);
	this->republic = new char[strlen(_republic) + 1];
	strcpy_p(republic, _republic);
}

void Planet:: Print() {
	std::cout << "Planet name: " << name << std::endl;
	std::cout << "Plante system: " << planetSystem << std::endl;
	std::cout << "Republic: " << republic << std::endl;
}

Planet :: Planet() {
	name = nullptr;
	planetSystem = nullptr;
	republic = nullptr;
}

