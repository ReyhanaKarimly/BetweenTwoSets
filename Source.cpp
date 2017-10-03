#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

int getTotalX(vector < int > a, vector < int > b) {
	int count = 0;
	int max = 0;
	
	for (size_t i = 0; i < a.size(); i++)
	{
		max = (max < a[i]) ? a[i] : max;

	}

	int min = 100;
	for (size_t i = 0; i < b.size(); i++)
	{
		min = (min > b[i]) ? b[i] : min;
	

	}
	int middle = 0;
	
	for (size_t i = max; i <= min; i++)
	{
		middle = 0;
		for (size_t j = 0; j < a.size(); j++)
		{
			if (i%a[j] == 0)
			{
				middle++;

			}
		}
		for (size_t t = 0; t < b.size(); t++)
		{
			if (b[t] % i == 0)
			{
				middle++;

			}

		}
		if (middle == a.size() +b.size())
		{
			count++;
		}
	}
	
	//cout << max << endl << min << endl;

	
	return count;

}

int main() {
	int n;
	int m;
	cin >> n >> m;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	vector<int> b(m);
	for (int b_i = 0; b_i < m; b_i++) {
		cin >> b[b_i];
	}


	int total = getTotalX(a, b);
	cout << total << endl;
	system("pause");
	return 0;
}