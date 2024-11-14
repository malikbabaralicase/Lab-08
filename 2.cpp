#include<iostream>
using namespace std;
int main()
{
    int num , i = 1;
    int sum = 0;
    cout << "Enter Any Number :" << endl;
    cin >> num;
    while ( i<= num)
    {
        sum = sum + i;
        i++;
    }
    cout<<"The sum of "<< num << " Natural Numbers is :"<< sum <<endl;
}
