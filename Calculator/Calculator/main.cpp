#include <iostream>
#include "Entropy.h"
#include "Information.h"

using namespace std;

void main() {
	cout << "1. Information" << endl << "2. Entropy" << endl << endl << "Make your choice." << endl;
	int choice(0);
	float input2(-1.0f);
	int input(-1);
	Information information = Information();
	Entropy entropy = Entropy();
	cin >> choice;
	switch (choice)
	{
	case 1:
		while (input !=0)
		{
			cout << "Type an integer count for the classe. Type 0 to end.";
			cin >> input;
			if (input > 0)
			{
				information.AddClass(input);
			}
		}
		cout << "Result :" << information.ComputeInformation() << endl;
		break;
	case 2:

		while (input2 != 0.0f)
		{
			cout << "Type a float probability for the classe. Type 0 to end.";
			cin >> input2;
			if (input2 > 0.0f)
			{
				entropy.AddProbability(input2);
			}
		}
		cout << "Result :" << entropy.ComputeEntropy() <<endl;
		break;
	}
	system("pause");
}