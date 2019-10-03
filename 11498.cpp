#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int n,x,y,nx,ny,px,py;

    while(cin>>n){
        if(n==0)
            break;

            cin>>x>>y;

            nx = (-1)*x;
            ny = (-1)*y;

        for(int c = 0; c<n; c++){
            cin>>px>>py;

            if(px==x || px==nx || py==y || py==ny){
                cout<<"divisa\n";
            }
            else if(x<px && py>y)
                cout<<"NE\n";
            else if(px<x && py>y)
                cout<<"NO\n";
            else if(px<x && py<y)
                cout<<"SO\n";
            else
                cout<<"SE\n";

        }
    }

}
