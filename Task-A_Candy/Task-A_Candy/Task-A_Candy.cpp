#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// integer num
	int64_t whole_Num;
	//cout << "How much?: ";
	cin >> whole_Num;

	// arr(str) of candies
	vector<string> names_of_candies;
	//cout << endl << "Input candies: (" << whole_Num << ")" << endl;

	for (int i = 0; i < whole_Num; i++)
	{
		string new_candy;
		cin >> new_candy;
		
		names_of_candies.push_back(new_candy);
	}

	//// test
	//for (int i = 0; i < whole_Num; i++)
	//{
	//	cout << names_of_candies[i] << endl;
	//}

	// count of sales
	int64_t count_sales;
	//cout << endl << "Count: ";
	cin >> count_sales;

	// two num 1-3, first and last candy flow
	int from_n, to_n;

	vector<string> answer;

	for (int i = 0; i < count_sales; i++)
	{
		//cout << endl << "From, to: ";
		cin >> from_n;
		cin >> to_n;

		for (int k = from_n - 1; k < to_n; k++)
		{
			//cout << names_of_candies[k] << endl;
			answer.push_back(names_of_candies[k]);
		}
	}

	// output
	cout << endl << endl;

	for (int i = 0; i < size(answer); i++)
	{
		cout << answer[i] << endl;
	}



	system("pause"); return 0;
}