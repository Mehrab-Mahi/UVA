#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,c=1,a[3];

    cin>>t;

    while(t--){
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        printf("Case %d: %d\n",c++,a[1]);
    }
}
