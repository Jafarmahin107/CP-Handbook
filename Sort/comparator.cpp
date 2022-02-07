#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; a < b; i++)
typedef long long ll;
using namespace std;

using namespace std;

/*
User defined structs do not have a comparison operator automatically. The operator should be defined inside the struct as a function 'operator<', whose parameter is another element of the same type. 
The operator should return true if the element is smaller than the parameter, and false otherwise.
*/

struct P{
    int x, y;
    bool operator<(const P &p){
        // Operator should return true if element is smaller than parameter

        if(x != p.x)
        {
            return x < p.x;
        } else
            return y < p.y;

    }
};

int main()
{
    P person1[3];
    person1[0].x = 1;
    person1[0].y = 4;


    person1[1].x = 3;
    person1[1].y = 5;

    
    person1[2].x = 1;
    person1[2].y = 2;

    sort(person1, person1+3);

    for(auto x:person1)
    {
        cout << x.x << " " << x.y <<  endl;
    }

    
    return 0;
}