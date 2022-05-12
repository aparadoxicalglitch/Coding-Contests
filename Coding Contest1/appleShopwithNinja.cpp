#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    sum -= arr[n - m];

    return sum;
}
int main()
{
    vector<int> vec;
    int n, m;
    int e;
    cout << "Enter the size of the vector : ";
    cin >> n;

    cout << "Enter the cupon : ";
    cin >> m;

    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        vec.push_back(e);
    }

    long long sum = appleAndCoupon(n, m, vec);
    cout << "The amount you have to pay is : " << sum << endl;

    return 0;
}