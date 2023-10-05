#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

// Check if pair with given Sum exists in Array 

//Approach 1- Brute force  O(n^2)

bool twoSum(vector<int>& nums, int target)
{
    //vector<int> output;
    for(int i{0}; i<nums.size()-1; i++)
    {
        for(int j{i+1}; j<nums.size(); j++)
        {
            if((nums[i] + nums[j]) == target)
            {
               return true;
            }
        }
    }
    return false;
}


//Approach -2 Efficient way O(1)
// Using hash maps

bool twoSumWithHashing(int arr[], size_t n, int target)
{
    std::unordered_set<int> s;
    for (int i{0}; i<n ; i++)
    {
        int temp{arr[i]- target};
        // gives pointer to the number if found or else gives last number
        if(s.find(temp) != s.end())
            return true;

        s.insert(arr[i]);
    }
    return false;
}

