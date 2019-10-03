#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,x,y;

    cin>>t;

    while(t--){
        cin>>x>>y;

        x = x-2;
        y = y-2;

        if(x%3==0)
            x = x/3;
        else
            x = (x/3)+1;

        if(y%3==0)
            y = y/3;
        else
            y = (y/3)+1;


        cout<<x*y<<endl;
    }

}
