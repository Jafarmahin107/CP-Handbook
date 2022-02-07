#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

using namespace std;

bool comp(string a, string b)
{
    // First parameter must always return true if it's smaller
    if(a.size() != b.size())
    {
        return a.size() < b.size();
    }else {
        return a < b;
    }
}

int main()
{
    string samples[5];
    samples[0] = "Jitu";
    samples[1] = "Mustahid";
    samples[2] = "Tasmia";
    samples[3] = "Nirjona";
    samples[4] = "Mahin";

    sort(samples, samples + 5); // default - sort based on order
    /* 
        Output: 
            Jitu
            Mahin
            Mustahid
            Nirjona
            Tasmia
    */

    sort(samples, samples + 5, comp); // Sort based on size first, then order
    /* 
        Output: 
            Jitu
            Mahin
            Tasmia
            Nirjona
            Mustahid
    */


    for(auto x: samples)
    {
        cout << x << endl;
    }

    return 0;
}