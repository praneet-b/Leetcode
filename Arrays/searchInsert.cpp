// Search insert posn .
// Given a sorted array in asc order find a number, if not found find appropriate posn where it should be inserted
#include<iostream>
int searchInsertPosn(int arr[], size_t n, int val)
{
    for (int i{0} ; i<n; i++)
    {
        if(arr[i] == val)
            return i;
        if(arr[i]> val)
            return i-1;
    }
    return -1;
}

// There is a better way to do this via binary search O(logn)

#include<iostream>
int searchInsertPosn(int arr[], size_t n, int val)
{
    int left{0};
    int right{n-1};
    while(left<right)
    {
        int middle{(left+right)/2};
        if(arr[middle] == val)
            return middle;
        if(arr[middle]< val)
            left = middle+1;
        else
            right = middle;
    }
    return left;
}
