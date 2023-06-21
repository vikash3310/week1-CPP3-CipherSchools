 #include <iostream>
using namespace std;

//pass by val
// void increment(int a)
// {
//     a++
//     return ;
// }
 
// pass by pointer
// void increment(int a){
// (*a)++;
// return;
void increment (int&a){
// (*a)++;
// int&b=
a++;
return;
}
// ->Addr
// int i;
// cout<< &{
// int&j=
int main(){
int i=11;
// int &j - i;
// 3++;
// cout<<i<<endl;
increment(i);
cout<<i<<endl;
return 0;
}