#include<iostream>
using namespace std;

int main()
{
    int n[5];
    int i = 0;
    int temp[5];
    while (i<5)
    {
        cout<<"Enter Number : "<< endl;
        cin>>n[i];
        i++;
    }
    i = 0;
    while ( i <= 5)
    {
        temp[i] = n[5 - i];
        i++;
    }
    for(int j = 1 ; j < 5 ; j++)
    {
        cout<<temp[j] << " ";
    }
    return 0;
}