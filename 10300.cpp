#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n,a,b,c;

    ll s =0;

    cin>>t;

    while(t--){
        cin>>n;
        s = 0;
        for(int i = 0;i<n;i++){
            cin>>a>>b>>c;

            s = s+(a*c);
        }

        cout<<s<<endl;
    }

}
