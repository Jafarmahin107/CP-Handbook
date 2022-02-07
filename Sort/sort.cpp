#include<bits/stdc++.h>
#define F first
#define S second
#define PuB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

void printV(vector<int> v){
    for(auto x:v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void printVP(vector<pair<int, int>> vp)
{
    for(auto x: vp)
    {
        cout << x.F << " " << x.S <<  endl;
    }
}

int main()
{
    // 1 Dimensional 
    vector<int> v {4,1,-6,12,53,13,51}; 
    sort(v.begin(), v.end());  // Ascending
    sort(v.rbegin(), v.rend()); // 
    // printV(v);    


    // PAIRS - Compares first number. If matched, compares second number
    vector<pair<int,int>> vp;
    vp.PuB({1,5});
    vp.PuB({2,3});
    vp.PuB({1,2});
    
    sort(vp.begin(), vp.end());
    // printVP(vp);

    // TUPLES
    vector<tuple<int, int, int>> vt;
    vt.PuB({2,1,4});
    vt.PuB({1,5,4});
    vt.PuB({2,1,2});
    
    sort(v.begin(), v.end());
    

    return 0;
}