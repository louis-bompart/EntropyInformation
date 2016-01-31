#pragma once

#include <vector>
#include <cmath>

class Entropy
{
public:
	Entropy();
	~Entropy();
	void AddProbability(float probability);
	float ComputeEntropy();
private:
	std::vector<float> probabilities;
	bool CheckProbabilities();
};

