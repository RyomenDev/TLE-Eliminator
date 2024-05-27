// searching and sorting

/*
prefix_Sum[i] = prefix_Sum[i-1] + arr[i]
return prefix_Sum[right] - prefix_Sum[left-1]
*/

/*
cout<<mp["1"] ; // if not defined it will give 0
*/

/*

ceil(a/b) =  floor((a+b-1)/b);
int mid = (left + right + 1) / 2;//ceil

*/

#include <bits/stdc++.h>
using namespace std;

// BinarySearch - find last index of target O(logN
// --upperBound & check if equal to target
int BinarySearch(vector<int> a, int target)
{
    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left + 1) / 2; // ceil & avoid overflow
        if (a[mid] <= target)
            left = mid;
        if (a[mid] > target)
            right = mid - 1;
    }
    // left & right are equal
    return (a[left] == target) ? left : -1; // -1 -> not exist
}

// BinarySearch - finds the first index of target O(logN
// lowerBound & check if equal to target

int BinarySearch(vector<int> a, int target)
{
    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2; // floor & avoid overflow;
        if (a[mid] < target)
            left = mid + 1;
        if (a[mid] >= target)
            right = mid;
    }
    // left & right are equal
    return (a[left] == target) ? left : -1;
}

bool predicate(int mid, vector<int> &nums, int target)
{
}

// Alternative Binary Search
int binarySearch(vector<int> &nums, int target)
{
    int min = 0, max = nums.size() - 1;
    int left = min - 1, right = max + 1; // -1 to n -> exclusive
    while (right - left > 1)             // while not empty range
    {
        int mid = left + (right - left) / 2;
        predicate(mid,nums,target) ? left = mid : right = mid;
    }
    // left is last true & right is first false
}

int main()
{
    return 0;
}
