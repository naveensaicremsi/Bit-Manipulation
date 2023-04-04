#include<bits/stdc++.h>
using namespace std;
/*
To check ith bit in a binary number is set or not 
Set means the bit at that particular index is 1
Not Set means the bit at that particular index is 0
Using bitwise right sift operator and "And" 
*/
int main()
{
 int n;
 cout<<"Enter a Number"<<endl;
 cin>>n; 
 cout<<"Enter the bit number to check it is set or not , Note bit index starts with 0 from LSB to MSB"<<endl;
 int i;
 cin>>i;
 if(n>>i&1)
 {
    cout<<"Set"<<endl;
 }
 else
 {
    cout<<"Not Set"<<endl;
 }
 return 0;
}