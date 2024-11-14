#include<iostream>
using namespace std;
int main()
{

    for(int i=1 ; i<= 5 ; i++)
    {
        char ch = 'A';
        for(int c = 1 ; c<= i; c++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    




}