#pragma once
#include <string>

class Drink
{
protected:
	std::string type; 
	std::string name; 
	std::string taste;
	std::string smell;
	double volume;
public: 
	virtual void heatUp(int temperature);
	std::string getName(); 
	std::string getTaste();
	std::string getSmell();
	std::string getType();
	double getVolume();


	void setName(std::string name);
	void setTaste(std::string taste);
	void setSmell(std::string smell);
	void setVolume(double volume);

	Drink();

	Drink(std::string name, std::string taste, std::string smell, double volume);
};

