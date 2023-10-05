
#include<iostream>
#include<vector>
using namespace std;

//        1
//       1 1
//      1 2 1
//     1 3 3 1
//    1 4 6 4 1
//   1 5  10 5 1
//  1 6 15  15 6 1

// INPUT IS NUMBER OF ROWS 


// Efficient way

// Need to check alternate ways and look for multiple soln
int printpascal(int n)
{
    int arr[n][n];
    for(int line{0}; line<n; line++)
    {
        for(int i{0}; i<=line; i++)
        {
            //first and last value are always 1
            if(line == i || i==0)
            {
                arr[line][i] = 1;
            }
            else{
                // other value of sum of above and left of above
                arr[line][i] = arr[line-1][i-1]+arr[line-1][i];
                cout<<arr[line][i]<<" ";

            }
        }
        cout<<"\n";
    }
}



// NAIVE METHOD O(N^3)
//requires binomial coefficient understanding
// Todo

