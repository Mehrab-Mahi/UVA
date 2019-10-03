#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n;
    ll s;
    cin>>t;
    while(t--){
        cin>>n;

        s = n*567;
        s = s/9;
        s = s+7492;
        s = s*235;
        s = s/47;
        s = s - 498;

        int k = 2,rem=0;
        if(s<0)
            s = s*-1;

        while(k--){
            rem = s%10;
            s = s/10;
        }

        cout<<rem<<endl;
    }

}
