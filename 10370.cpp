#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n;
    double c,s,p;

    cin>>t;

    while(t--){
        cin>>n;
        s = 0;
        double a[n];
        for(int i = 0 ; i<n;i++){
            cin>>a[i];

            s = s+a[i];
        }
        s = s/n;

        c = 0;

        for(int i = 0;i<n;i++){
            if(a[i]>s)
                c=c+1.00;
        }

        p = (c/n)*100;

        printf("%.3f%%\n",p);

    }

}
