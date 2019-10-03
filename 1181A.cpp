#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    ll x,y,z,c,g;

    cin>>x>>y>>z;

    c = (x+y)/z;

    ll money = c*z;

    if((x%z)+(y%z)<z)
        g = 0;
    else{
        if(x%z!=0){
            ll gg = z-(x%z);

            if(y%z>=gg)
                g = gg;
            else
                g = 0;
        }
        if(y%z!=0)
        {
            ll gg = z-(y%z);

            if(x%z>=gg)
                gg = gg;
            else
                gg = 0;

        if(g>gg)
            g = gg;

        }
    }

    cout<<c<<" "<<g<<endl;

}
