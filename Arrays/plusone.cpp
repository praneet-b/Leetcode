#include<iostream>
#include <vector>
using namespace std;

//Plus one -> Represent a large number as array of int 
// ex-  45678 represented as int arr[]{4,5,6,7,8};
//Now add 1 such that result should be {4,5,6,7,9}

// Tricky case if last digit is 9 as previous digit should also be changed
 vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; --i) {
      if (digits[i] < 9) {
        ++digits[i];
        return digits;
      }
      digits[i] = 0;
    }
    // If first digit is 9 and 1 is added
    digits.insert(digits.begin(), 1);
    return digits;
  }