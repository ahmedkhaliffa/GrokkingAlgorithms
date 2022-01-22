#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> arr, int k) {
	
	int n = arr.size();
	int high = n - 1;
	int low = 0;
	

	while (low <= high)
	{
		int mid = (low + high) / 2;
	

		if (arr[mid] == k)
		{
			return mid;
		}
		if (arr[mid] < k)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
};
