#include <iostream>
#include <vector>

using namespace std;

int SmallestElement(vector<int> arr) {
    int smallest = arr[0];
    int smallestIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}
vector<int> SelectionSort(vector<int> arr) {
    vector<int> SortedArray;
    for (int i = 0; i < arr.size();)
    {
        int index = SmallestElement(arr);
        SortedArray.push_back(arr[index]);
        arr.erase(arr.begin() + index);
    }


    return SortedArray;
};
