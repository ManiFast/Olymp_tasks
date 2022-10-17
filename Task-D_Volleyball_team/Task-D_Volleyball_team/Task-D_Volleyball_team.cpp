#include <iostream>
#include <vector>

using namespace std;

// Globals
int64_t players;
vector<int> values_of_height(players);

int check_for_similarity(int* from, int* to)
{
	bool yes = 0;

	for (int i = *from; i < *to; i++)
	{
		//if (i )
	}

	return yes;
}

int main()
{
	// input n and k
	// n - all players | k - optmal height
	//int64_t players;
	int height;

	cin >> players >> height;

	// input a1 a2 an
	// all value of height
	//vector<int> values_of_height(players);
	for (int i = 0; i < players; i++)
	{
		cin >> values_of_height[i];
	}


	// logic and output answer
	int max_count, number_of_first_player;

	int average_sum;
	for (int i = 0; i < players; i++)
	{
		for (int k = 1; k < players - 1; k++)
		{

		}
	}




	cout << endl << endl; system("pause"); return 0;
}