#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n,x,y,h,l,c=1;

    cin>>t;

    while(t--){
        cin>>n;
        cin>>x;
        h = 0 , l = 0;

        if(n>1){
            for(int i = 1;i<n;i++){
                cin>>y;

                if(y>x)
                    h++;
                else if(x>y)
                    l++;

                x = y;

            }
        }

        printf("Case %d: %d %d\n",c,h,l);
        c++;


    }


}
