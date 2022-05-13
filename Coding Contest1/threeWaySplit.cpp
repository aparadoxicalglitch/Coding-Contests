#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long threeWaySplit(int n, vector<int> arr){
    
    // If only single element is there then we will return 0.
    if(n == 1){
        return 0;
    }

    // Initially assign 0 to 'ans'.
    long long ans = 0;

    // Two pointers which points to our next locations. 
    int i = 0;
    int j = n - 1;

    // Sum from ahead.
    long long front = arr[i];
    i++;

    // Sum from back.
    long long last = arr[j];
    j--;

    // Initial Checking if first and last elements are same.
    if(front == last){
        ans = front;
    }

    // Run a loop until 'i' crosses 'j' or vice versa.
    while(i <= j){

        if(front < last){
            front += arr[i];
            i++;
        }
        else{
            last += arr[j];
            j--;
        }

        // If a subsegment is found which has same sum.
        if(front == last){
            ans = front;
        }

    }

    return ans;
}

int main()
{
    vector<int> vec;
    int n, m;
    int e;
    cout << "Enter the size of the vector : ";
    cin >> n;

    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        vec.push_back(e);
    }

    long long ans = threeWaySplit(n,vec);
    cout<<"Answer : "<<ans<<endl;
    
    return 0;
}