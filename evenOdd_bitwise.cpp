#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    (n & 1 == 1) ? cout <<"the given number is odd" : cout <<"the given number is even" << endl;
return 0;
}