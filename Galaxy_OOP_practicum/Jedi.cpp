
#include "Jedi.hpp"
#include "Planet.hpp"
#define _CRT_SECURE_NO_WARNINGS

void Planet::strcpy_j(char* firstText, const char* secondText) {
	int i = 0;
	do {
		firstText[i] = secondText[i];
		i++;
	} while (secondText[i] != '\0');
}

Jedi::Rank DeterminRank(char* _rank) {

	if (_rank == "Youngling")
	{
		return Rank::Youngling;
	}
	else if (_rank == "Padawan")
	{
		return Rank::Padawan;
	}
	else if (_rank == "JediKnight")
	{
		return Rank::JediKnight;
	}
	else if (_rank == "JediConsular")
	{
		return Rank::JediConsular;
	}
	else if (_rank == "JediGuardian")
	{
		return Rank::JediGuardian;
	}
	else if (_rank == "JediSentinel")
	{
		return Rank::JediSentinel;
	}
	else if (_rank == "JediMaster")
	{
		return Rank::JediMaster;
	}
}

Jedi :: Jedi(const Jedi& other){  //copy constructor
	this->name = new char[strlen(other.name) + 1];
	strcpy_j(this->name, other.name);
	this->rank = other.rank;
	this->midi_chlorian = other.midi_chlorian;
	this->planet = other.planet
	this->spicies = new char[strlen(other.spicies) + 1];
	strcpy_j(this->spicies, other.spicies);
	this->militaryRank = new char[strlen(other.militaryRank) + 1];
	strcpy_j(this->militaryRank, other.militaryRank);
}

Jedi ::~Jedi() {
	delete [] name;
	delete [] spicies;
	delete[] militaryRank;
}

Jedi::Jedi& operator= (const Jedi& other) {
	if (this != other) {
		delete[] name;
		this->name = new char[strlen(other.name) + 1];
		strcpy_j(this->name, other.name);
		this->rank = other.rank;
		this->midi_chlorian = other.midi_chlorian;
		this->planet = other.
		delete[] spicies;
		this->spicies = new char[strlen(other.spicies) + 1];
		strcpy_j(this->spicies, other.spicies);
		delete[] militaryRank;
		this->militaryRank = new char[strlen(other.militaryRank) + 1];
		strcpy_j(this->militaryRank, militaryRank);
	}
	return *this;
}

Jedi::Jedi(char* _name, Rank _rank, double _midi_chlorian, Planet _planet, char* _spicies, char* _militaryRank) {
	this->name = new char[strlen(_name) + 1];
	strcpy_j(this->name, _name);
	this->rank = _rank;
	this->midi_chlorian = _midi_chlorian;
	this->planet = _planet.operator=(); ////????????????
	this->spicies = new char[strlen(_spicies) + 1];
	strcpy_j(this->spicies, _spicies);
	this->militaryRank = new char[strlen(_militaryRank) + 1];
	strcpy_j(this->militaryRank, _militaryRank);
}

Jedi::Print() {
	std::cout << "Name: " <<this-> name << std::endl;
	std::cout << "Rank: " << this->rank << std::endl;
	std::cout << "Planet information: " << this->planet.Print() << std::endl;
	std::cout << "Midi chlorian: " << this->midi_chlorian << std::endl;
	std::cout << "Spicies: " << this->spicies << std::endl;
	std::cout << "MilitaryRank: " <<this-> militaryRank << std::endl;

}


Jedi::Jedi() {  // default constructor
	name = nullptr;
	this->rank = Rank::Youngling;
	midi_chlorian = 0.0;
	planet.Planet();  //??
	spicies = nullptr;
	militaryRank = nullptr;
}

