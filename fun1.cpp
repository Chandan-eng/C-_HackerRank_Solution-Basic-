# C-_HackerRank_Solution-Basic-
//C++ HackerRank Problem All Solution  

#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max(a,b);
    int ans1=max(c,d);
    if(ans>ans1)
    cout<<ans;
    else 
    cout<<ans1;
    
    return 0;
}

