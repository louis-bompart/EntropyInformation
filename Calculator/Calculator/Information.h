#pragma once

#include "Entropy.h"
#include <vector>

class Information
{
public:
	Information();
	~Information();
	void AddClass(int input);
	float ComputeInformation();
private:
	std::vector<int> classes;
	int sum;
};

