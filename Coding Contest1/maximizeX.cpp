#include<iostream>
using namespace std;
#include<vector>

int findMaxX(int n, vector<vector<int>> arr, int b)
{
    //Variable to store the maxium value of B.
    int maximum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 1 ; j <= arr[i][0] ; j++)
        {
            maximum = max(maximum, arr[i][j]);
        }
    }

    // Variable to store the maximum variable.
    int ans = 0;
    for (int x = 0 ; x <= maximum ; x++)
    {

        // Variable to store the total number of candies given.
        int total = 0;
        for (int i = 0 ; i < n ; i++)
        {
            for (int j = 1 ; j <= arr[i][0] ; j++)
            {

                // If the demand of candies is less than equal to x ,
                // the total number of candies is increased.
                if (arr[i][j] <= x)
                {
                    total += arr[i][j];
                }
            }
        }

        //If the total number of candies given is less than equal to B,
        // we update the value of ans.
        if (total <= b)
        {
            ans = max(ans, x);
        }

    }

    return ans;
}

int main()
{
    
    return 0;
}