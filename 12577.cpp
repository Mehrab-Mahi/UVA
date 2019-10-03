#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int cas=1;
    string s;

    while(1){
        cin>>s;

        if(s=="*")
            break;

        cout<<"Case "<<cas<<": ";
        cas++;

        if(s=="Hajj")
            cout<<"Hajj-e-Akbar"<<endl;
        if(s=="Umrah")
            cout<<"Hajj-e-Asghar"<<endl;
    }

}
