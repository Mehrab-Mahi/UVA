#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,m;

    while(cin>>n>>m){
        if(n==1){
            cout<<m-1<<endl;
        }
        else if(m==1)
            cout<<n-1<<endl;
        else{
            cout<<(n-1)+((m-1)*n)<<endl;
        }
    }

}
