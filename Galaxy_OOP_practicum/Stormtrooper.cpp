#include "Stormtrooper.hpp"
#define _CRT_SECURE_NO_WARNINGS

void Planet::strcpy_st(char* firstText, const char* secondText) {
	int i = 0;
	do {
		firstText[i] = secondText[i];
		i++;
	} while (secondText[i] != '\0');
}


Stormtrooper::Rank_S DeterminRank_S(char* _rank) {

	if (_rank == "Cadet")
	{
		return Rank_S::Cadet;
	}
	else if (_rank == "Private")
	{
		return Rank_S::Private;
	}
	else if (_rank == "LanceCorporal")
	{
		return Rank_S::LanceCorporal;
	}
	else if (_rank == "Corporal")
	{
		return Rank_S::Corporal;
	}
	else if (_rank == "StaffSergeant")
	{
		return Rank_S::StaffSergeant;
	}
	else if (_rank == "MasterSergeant")
	{
		return Rank_S::MasterSergeant;
	}
}
Stormtrooper::Stormtrooper() {  // default constructor
		id = nullptr;
		this->rank = Rank::Cadet;
		type = nullptr;
		planet.Planet();  //??
}

Stormtrooper::Stormtrooper(const Stormtrooper& other) { //cpy
		this->id = new char[strlen(other.id) + 1];
		strcpy_st(this->id, other.id);
		this->rank = other.rank;
		this->type = new char[strlen(other.type) + 1];
		strcpy_st(this->type, other.type);
		this->planet = other.planet;
}
Stormtrooper::~Stormtrooper() {
	delete []id;
    delete []type;
}

Stormtrooper::Stormtrooper& operator=(const Stormtrooper& other) {
	if (this != other) {
		delete[] id;
		this->id = new char[strlen(other.id) + 1];
		strcpy_st(this->id, other.id);
		this->rank = other.rank;
		this->planet = other.planet;
		}
	return *this;
}

Stormtrooper::Stormtrooper(char* _id, Rank_S _rank, char* _type, Planet _planet) {
	this->id = new char[strlen(_type) + 1];
	strcpy_st(this->type, _type);
	this->rank = _rank;
	this->type = new char[strlen(_type) + 1];
	strcpy_st(this->type, _type);
	this->planet = _planet;
}

Stormtrooper::Print() {
	std::cout << "ID :" <<this->id<< std::endl;
	std::cout << "Rank :" << this->set_rank << std::endl;
	std::cout << "Planet :" << this->planet << std::endl;
}
