#pragma once
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

void strcpy_p(char* firstText, const char* secondText);
	

class Planet {
private:
	char* name;
	char* planetSystem;
	char* repbublic;
public:
	void set_name(const char* _name) {
		strcpy_p(name, _name);
	}
	char* get_name()const{
		return this ->name;
	}
	void set_planerSystem(const char* _planetSystem) {
		strcpy_p(planetSystem, _planetSystem);
	}
	char* get_planetSystem()const {
		return this ->planetSystem;
	}
	void set_repbublic(const char* _repbublic) {
		strcpy_p(repbublic, _repbublic);
	}
	char* get_repbublic()const {
		return this ->repbublic;
	}

	void Print();
    Planet();
    Planet(const Planet& other);
	~Planet();
	Planet& operator=(const Planet& other);
	Planet(char* _name, char* _planetSystem, char* _repulic);
};
