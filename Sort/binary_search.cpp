#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

void printV(vector<int> v)
{
    for(auto x: v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v {9,8,1,5,-2,53,23,13,32,5,4,5};

    // cout << v.begin() << endl;
    // cout << v << endl;
    sort(v.begin(), v.end());
    printV(v);

    int searchValue = 13;
    cout << "Enter the value to be searched: ";
    cin >> searchValue;

    int mid = 0, left = 0, right = v.size();
    while(left <= right)
    {
        mid = left + (right - left)/2;

        // cout << left << " " << mid << " " << right << endl; 

        if(v[mid] < searchValue)
            left = mid + 1;
        else if(v[mid] > searchValue)
            right = mid - 1;
        else
            break;
    } 
    if(v[mid] == searchValue)
    {
        cout << "Value found in position :" << mid  << endl;
    } else
    {
        cout << "Not found, Mid: "<<mid << endl;
    }

    return 0;
}