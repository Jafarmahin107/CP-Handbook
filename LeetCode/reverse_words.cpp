#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

string reverseWords(string s)
{
    string ans = "";
    int senS = s.size();

    int l = 0, r = -1;
    int tempL = l;
    for(int i = 0; i < senS; i++)
    {
        if(s[i] == ' ')
        {
            l = tempL;
            r = i-1;
            while(l<r)
            {
                swap(s[l++], s[r--]);
            }
            tempL = i+1;
        }
    }
    int tempR = senS-1;
    while(tempL < tempR)
    {
        swap(s[tempL++], s[tempR--]);
    }
    cout << tempL << l << r<< "\n";
    ans = s;
    return ans;
}


int main()
{
    string input = "sup bitches";
    cout <<  reverseWords(input);
    return 0;
}
