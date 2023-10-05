#include<iostream>
#include<vector>

// Program to remove duplicate elements from sorted array

// not in place
// Simply loop around the numbers and check if adjacent elem are equal and only add when unequal .

int removeDup(int arr[], size_t n)
{
    // corner case
    if(n==0 || n==1)
        return n;
    
    int temp[n];
    int j{0};
    for(int i{0}; i<n-1; i++)
    {
        if(arr[i] != arr[i+1])
            temp[j++] = arr[i];
    }
    // Store last elem as it is never compared irrespective of unique or not
    temp[j++] = arr[n-1];
    for(int i{0}; i<j; i++)
        arr[i] = temp[j];

    return j;
}


// For in place a separate index can be maintained .


