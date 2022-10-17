#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// car in stored and in show room
	int64_t stored_cars, show_cars;
	cin >> stored_cars;
	cin >> show_cars;

	// arr of numbers (colours)
	vector<int> colours_of_cars;

	for (int i = 0; i < stored_cars; i++)
	{
		int32_t new_colour;
		cin >> new_colour;

		colours_of_cars.push_back(new_colour);

	}

	



	return 0;
}