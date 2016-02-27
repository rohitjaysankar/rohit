#include <iostream>
#define pss pair<string,string>

using namespace std;


int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--){
        pss s[100];
        string unstage[100];
        int n,i,k,ans=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>s[i].first>>s[i].second;
        }
        i=0;
        while(i<n) {
            if(s[i].first=="stage") break;
            i++;
        }
        if(i<n) {
            while(i<n) {
                if(s[i].first=="unstage") break;
                i++;
            }
            ans=1
        }
    }
    return 0;
}
