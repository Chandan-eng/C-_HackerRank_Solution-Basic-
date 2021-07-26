# C-_HackerRank_Solution-Basic-
//C++ HackerRank Problem All Solution  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define max 50
using namespace std;


int main() {
    vector<int> a;
    int i,size,x;
    cin>>size;
    for(i=0;i<size;i++){
    cin>>x;
    a.push_back(x);
    }
    for(auto r=a.rbegin();  r!= a.rend(); ++r) 
    cout<<*r<<" ";
    return 0;
}

