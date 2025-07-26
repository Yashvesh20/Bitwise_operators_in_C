Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main(){
    int a = 20, b= 22;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_not=~a;
    int leftshift=a<<2;
    int rightshift=3>>a;
    cout << "AND :"<<bitwise_and<<endl;
    cout << "OR :"<<bitwise_or<<endl;
    cout << "XOR :"<<bitwise_xor<<endl;
    cout << "NOT :"<<bitwise_not<<endl;
    cout << "Leftshift :"<<leftshift<<endl;
    cout << "Rightshift :"<<rightshift<<endl;
}
output:
AND :20
OR :22
XOR :2
NOT :-21
Leftshift :80
Rightshift :0
