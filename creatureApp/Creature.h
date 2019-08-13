#pragma once
#include <string>
using namespace std;

class Creature
{
	int m_weight;
	int m_size;
	string m_type;
public:
	//Creature();
	Creature(int weight, int size, string type);
	~Creature(void);

	int getWeight() const;
	void showAttributes() const;
	void moveOn() const;
};

