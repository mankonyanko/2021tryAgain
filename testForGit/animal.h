#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	bool sex;
protected:
	int hp;
public:
	void sayWhat();
};

void Animal::sayWhat()
{
	cout << "I am animall" << endl;
}

class Human : public Animal {
private:
	int IQ;
protected:
	float manMonth;
public:
	void sayWhat();
};

void Human::sayWhat()
{
	Animal::sayWhat();
	cout << "and Also human!" << endl;
}

class James : public Human {
private:
	string name;
protected:
	//void setHumanName(string x);
public:
	void sayWhat();
};



void James::sayWhat()
{
	Human::sayWhat();
	cout << "my name is " << this->name << endl;
}

