#include "Entropy.h"



Entropy::Entropy()
{
}


Entropy::~Entropy()
{
}

void Entropy::AddProbability(float probability)
{
	probabilities.push_back(probability);
}

float Entropy::ComputeEntropy()
{
	if (probabilities.empty())
	{
		return 0;
	}
	if(CheckProbabilities())
	{
		float entropy(0.0f);
		for each (float var in probabilities)
		{
			entropy += var*log10f(var);
		}
		return -entropy/log10(2);
	}

	return 0.0f;
}

bool Entropy::CheckProbabilities()
{
	float checkSum(0.0f);
	for each (float var in probabilities)
	{
		checkSum += var;
	}
	return (checkSum == 1.0f);
}
