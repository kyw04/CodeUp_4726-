#include <iostream>
#include <algorithm>
#include <vector>
#define MIN -10000000
using namespace std;

int main()
{
	vector<int> arr(0);
	int n, k, sum = 0;
	int result = MIN;

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}

	for (int i = 0; i < k; i++)
		sum += arr[i];
	result = max(result, sum);
	for (int i = k; i < n; i++)
	{
		sum -= arr[i - k];
		sum += arr[i];
		result = max(result, sum);
	}
	cout << result;

	return 0;
}