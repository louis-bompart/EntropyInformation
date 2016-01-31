#include "Information.h"



Information::Information():sum(0)
{
}


Information::~Information()
{
}

void Information::AddClass(int input)
{
	classes.push_back(input);
	sum += input;
}

float Information::ComputeInformation()
{
	if (classes.empty())
	{
		return 0.0f;
	}
	Entropy entropy = Entropy();
	for each (int var in classes)
	{
		entropy.AddProbability(static_cast<float>(var) / static_cast<float>(sum));
	}
	return entropy.ComputeEntropy();
}
