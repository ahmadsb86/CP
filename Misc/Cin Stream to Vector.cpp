#include <iostream>
#include <vector>

using namespace std;

vector<int> N;
int input, x;
int main()
{
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> input;
        N.push_back(input);
    }
    for (int i = 0; i < N.size(); i++)
    {
        cout << N[i] << " ";
    }
}
