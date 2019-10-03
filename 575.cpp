#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;

    int d = 0;

    while(cin>>s){

        if(s=="0")
            break;

        ll c = 1,ans=0;

        for(int i = s.size()-1;i>=0;i--){

            d = s[i] - 48;

            ans = ans + d*(pow(2,c)-1);
            //cout<<"   "<<ans<<endl;
            c++;

        }

        cout<<ans<<endl;

    }

}
