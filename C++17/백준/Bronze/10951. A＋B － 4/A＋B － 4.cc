#include <iostream>
#include <vector>

using namespace std;

int sol_10951(int a, int b)
{
    return a + b;
}

int main()
{
    vector<int> results;
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << "\n";
    }
    return 0;
}