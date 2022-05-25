#include<iostream>
using namespace std;
// To find the type of the current point.
char diamond(int i, int j, int s)
{
    bool backslash = true;

    // Checking if the point lie in lower part or not.
    if (i >= s / 2)
    {
        i = s - i - 1;
        backslash = !backslash;
    }

    // Checking if the point lie in left part or not.
    if (j < s / 2)
    {
        j = s - j - 1;
        backslash = !backslash;
    }

    j -= s / 2;

    // Checking if the point is on the diagonal or not.
    if (i == j)
    {
        if (backslash)
        {
            return '\\';
        }
        else
        {
            return '/';
        }
    }
    // Checking if the point is inside the diamond or not.
    else if (i > j)
    { 
        return 'o';
    }
    else
    {
        return 'e';
    }
};

void printTheDiamond(int r, int c, int s)
{
    s *= 2;
    r = s * r;
    c = s * c;

    for (int i = 0; i < r; ++i)
    {
        
        for (int j = 0; j < c; ++j)
        {
            // (i % s, j % s) is the relative position according to the top left corner of the current diamond.
            cout<<diamond(i % s, j % s, s);
        }

        cout<<"\n";
    }
    
}
int main()
{
    


    return 0;
}