#pragma once
#include <iostream>
#include <cstring>
#include "Planet.hpp"
#define _CRT_SECURE_NO_WARNINGS

void strcpy_j(char* firstText, const char* secondText);

enum class Rank
{
	Youngling,
	Padawan,
	JediKnight,
	JediConsular,
	JediGuardian,
	JediSentinel,
	JediMaster
};

Rank DeterminRank(char* _rank);

class Jedi {
private:
	char* name;
	Rank rank;
	double midi_chlorian;
	Planet planet;
	char* spicies;
	char* militaryRank;
public:
	void set_name(const char* _name) {
		strcpy_j(this ->name, _name);
	}

	char* get_name() const{
		return this->name;
	}
	void set_rank(const Rank _rank) {
		this->rank = _rank;
	}

	Rank get_rank() const {
		return this->rank;
	}
	

	void set_midi_chlorian(const double _midi_chlorian) {
		this->midi_chlorian = _midi_chlorian;
	}

	double get_midi_chlorian() const {
		return this-> midi_chlorian;
	}

	void set_planet(const Planet& _planet) {
		this->planet = _planet;
	}

	Planet get_planet() const {
		return this->planet;
	}

	void set_spicies(const char* _spicies) {
		strcpy_j(this ->spicies, _spicies);
	}

	char* get_spicies() const {
		return this ->spicies;
	}

	void set_militaryRank(const char* _militaryRank) {
		strcpy_j(this->militaryRank, _militaryRank);
	}

	char* get_militaryRank()const {
		return this->militaryRank;
	}

	void Print();
    Jedi();
    Jedi(const Jedi& other); //cpy constructor
	~Jedi();//destructor
	Jedi& operator= (const Jedi& other); 
	Jedi(char* _name, Rank _rank, double _midi_chlorian,Planet planet,char* _spicies, char* _militaryRank); // constructor with parameters
	
};
