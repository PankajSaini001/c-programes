#include <iostream>
using namespace std;
int sumOfN(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout <<"the sum of"<<" "<< n <<" "  <<"natural no. is: "<< sumOfN(n)<<endl;
return 0;
}