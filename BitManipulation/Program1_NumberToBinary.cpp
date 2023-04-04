#include<bits/stdc++.h>
using namespace std;
/*
To convert a given number to binary format from lsb to msb format
*/
int main()
{
    int n=5;
    while(n)
    {
        int bit=n&1;
        cout<<bit<<"";
        n=n>>1;
    }
    return 0;
}

/*
TC-O(log(n))
*/