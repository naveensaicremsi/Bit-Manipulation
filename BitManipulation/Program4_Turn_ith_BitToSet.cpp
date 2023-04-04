#include<bits/stdc++.h>

using namespace std;

int main()

{
  int n;
  cout<<"Enter a Number\n";
  cin>>n;
  int i;
  cout<<"Enter the index of the bit to turn on\n";
  cin>>i;
  n=n|(1<<i);
  cout<<n;
  return 0;
}