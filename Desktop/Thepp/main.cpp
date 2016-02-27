#include <iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    ll t;
    cin>>t;
    while(t--){
        ll f,h,w,a[505],i,min;
        cin>>f>>h>>w;
        for(i=0;i<f;i++) cin>>a[i];
        a[f]=w;
        sort(a,a+f+1);
        min=a[0];
        for(i=1;i<=f;i++){
            if(a[i]-a[i-1]<min) min=a[i]-a[i-1];
        }
        cout<<min*h<<"\n";
    }
    return 0;
}
