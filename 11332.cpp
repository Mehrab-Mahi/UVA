#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int sum(int n){

    int s=0;

    while(n){
        s = s + n%10;
        n = n/10;
    }

    if(s<10)
        return s;
    else
        sum(s);
}

int main()
{
    optimize;

    int n,s,c;

    while(cin>>n){
        if(n==0)
            break;

        if(n<10)
            cout<<n<<endl;
        else{

            s = sum(n);

            cout<<s<<endl;

        }
    }

}
