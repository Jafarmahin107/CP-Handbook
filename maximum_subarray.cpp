#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;


// Solves in O(n^1) time
int continuous_subarray_n1(vector<int> v)
{
    int best = 0, sum = 0;
    int n = v.size();

    vector<int> sumTill(n,0) ;
    int left = -1, right = -1;

    for(int i = 0; i < n; i++)
    {
        // sum += v[i];
        sum = max(v[i], sum + v[i]);
        best = max(sum, best); 

        sumTill[i] = sum;
    }
    return best;
}

// Solves in O(n^2) time
int continuous_subarray_n2(vector<int> v)
{
    int sum = 0, best = 0;
    int n = v.size();

    int left = -1, right = -1;

    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += v[j];
            // best = max(sum, best);
            if(sum > best)
            {
                left = i;
                right = j;

                best = sum;
            }
        }
    }
    cout << "Range in between " << left+1 <<  " & " << right+1 << endl;
    return best;
}

// Solves in O(n^3) time
int continuous_subarray_n3(vector<int> v)
{
    // Solves in n^3 time 
    int sum = 0, best = 0;
    int n = v.size();

    int l = -1, r = -1;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += v[k];
            }
            // best = max(sum, best);

            if(sum > best)
            {
                best = sum;
                l = i;
                r = j;
            }
        }
    }
    
    cout << "Range in between " << l+1 <<  " & " << r+1 << endl;
    return best;
}

int main ()
{
    vector<int> v(8);
    v = {-1, 2,4,-3,5,2,-5,2};
   
    cout << continuous_subarray_n1(v);
}