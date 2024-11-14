#include<iostream>
using namespace std;
int main()
{
    int num , i = 1;
    int product = 1;
    cout<<"Enter A Number to display its table:"<<endl;
    cin>>num;

    while(i<=10)
    {
        product = num * i;
        cout<< num <<" x " << i << " = "<< product << endl;
        i++;
    }
    return 0;
}
