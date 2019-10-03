#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    int t,n;

    cin>>t;

    while(t--){
        cin>>n;

        int a[n],s=0;

        for(int i = 0 ; i<n ;i++)
            cin>>a[i];


        for(int i = 0;i<n;i++){
            for(int j = 1;j<n;j++){
                if(a[j]<a[j-1]){
                    swap(a[j],a[j-1]);
                    s++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",s);

    }

}
