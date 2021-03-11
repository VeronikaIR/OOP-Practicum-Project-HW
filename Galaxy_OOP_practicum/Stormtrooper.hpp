#pragma once
#include <iostream>
#include <cstring>
#include "Planet.hpp"
#define _CRT_SECURE_NO_WARNINGS

enum class Rank_S
{
	Cadet,
	Private,
	LanceCorporal,
	Corporal,
	StaffSergeant,
	MasterSergeant
};

Rank_S DeterminRank_S(char* _rank);

void strcpy_st(char* firstText, const char* secondText);
	
class Stormtrooper {
private:
	char* id;
	Rank_S rank;
	char* type;
	Planet planet;
public:

	void set_id(const char* _id) {
		strcpy_st(this->id, _id);
	}
	char* get_id() const {
		return this->id;
	}

	void set_rank(const Rank_S _rank) {
		this->rank = _rank;
	}

	Rank_S get_rank() const { //?
		return this->rank;
	}

	void set_type(const char* _type) {
		strcpy_st(this->type, _type);
	}
	char* get_type() const {
		return this->type;
	}
	void set_planet(const Planet& _planet) {
		this->planet = _planet;
	}

	Planet get_planet() const {
		return this->planet;
	}

	Stormtrooper();  // default constructor
	Stormtrooper(const Stormtrooper & other); //copy constructor
	~Stormtrooper(); //destrctructor
	Stormtrooper& operator=(const Stormtrooper & other);
	Stormtrooper(char* _id, Rank _rank, char* _type, Planet _planet);
	void Print();
	
};