#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--){
        int a[4],n,i,mins;
        string p;
        cin>>n;
        a[0]=a[1]=a[2]=a[3]=0;
        for(i=0;i<n;i++){
            cin>>p;
            if(p=="aa") a[0]++;
            else if(p=="ab") a[1]++;
            else if(p=="ba") a[2]++;
            else if(p=="bb") a[3]++;
        }
        if(a[1]<a[2]) mins=a[1];
        else mins=a[2];
        string s="";
        int f=0;
        for(i=0;i<a[0]/2;i++) s+="aa";
        for(i=0;i<mins;i++) s+="ab";
        for(i=0;i<a[3]/2;i++) s+="bb";
        if(a[0]%2==1) {s+="aa";f=1;}
        if(f==0 && a[3]%2==1) s+="bb";
        for(i=0;i<a[3]/2;i++) s+="bb";
        for(i=0;i<mins;i++) s+="ba";
        for(i=0;i<a[0]/2;i++) s+="aa";
        cout<<s<<"\n";
    }
    return 0;
}
