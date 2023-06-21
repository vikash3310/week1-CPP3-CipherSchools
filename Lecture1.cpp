
#include <iostream>
using namespace std;
int sums(int a,int b)
{
    return (a+b);
}
int main() {
    cout << "enter two nos";
    int a,b;
    cin>>a>>b;
    cout<<sums(a,b);
    return 0;
}