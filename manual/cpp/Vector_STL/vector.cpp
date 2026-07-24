#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers;
    int inp;
    for (int x = 0; x < 3; x++)
    {
        cout << "plz enter a Number: ";
        cin >> inp;
        numbers.push_back(inp);
    }
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(6);
    cout << numbers[1];
}