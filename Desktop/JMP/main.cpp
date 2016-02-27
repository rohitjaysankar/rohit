#include <iostream>

using namespace std;

int fjump[5000][5000];
int bjump[5000][5000];
int h[5000];
int df[5000];
int db[5000];
int visited[5000];
int mxN;
void DFS(int v,int cN,int s,int e,int flag){
    visited[v]=1;
    if(h[v] == 1) return;
    if (cN + h[v] < mxN)    return;
    if(flag==1){
        for(int i=s;i<=e;i++){
            if(fjump[v][i]==1){//} &&visited[i]==0){
                //cout<<cN<<" ";
                //cN++;
                 if(cN+1>mxN)
                    mxN=cN+1;
                DFS(i,cN+1,s,i-1,0);
            }
        }
    }
    else{
       for(int i=e;i>=s;i--){
            if(bjump[v][i]==1){//}&&visited[i]==0){
                //cout<<cN<<" ";
                //cN++;
                if(cN+1>mxN)
                    mxN=cN+1;
                DFS(i,cN+1,i+1,e,1);
            }
        }
    }

}
/*
void nDFS(int v, int cN, int s, int e, int flag) {

    if (h[v] + cN < mxN) return;
    while (e - s >= 0) {
        if (flag == 1) {
            for (int i=s; i<)

        }



    }


}
*/

int main()
{
    int N;
    cin >> N;
    for(int i =0; i<N; ++i) {
        cin>>h[i];
    }
    for (int i =0; i<N; ++i) {
        for(int j = 0 ; j<N; ++j) {
            if (j < i) {
                fjump[i][j] =0;
                if (h[j] < h[i]) bjump[i][j]=1;
                else bjump[i][j] == 0;
            }
            else if(i < j){
                bjump[i][j] = 0;
                if (h[j] < h[i]) fjump[i][j]=1;
                else fjump[i][j]=0;
            }
        }
        fjump[i][i] = 0;
        bjump[i][i] = 0;
    }

//    for (int i =0; i<N; ++i) {
//        for (int j =0; j<N; ++j) {
//            cout << fjump[i][j] << " ";
//            }
//            cout << endl;
//    }

    for(int i=0;i<N;++i){
        //for(int j=0;j<N;++j) visited[j] = 0;
        mxN = 0;
        DFS(i,0,i+1,N-1,1);
        df[i]=mxN;

        mxN = 0;
        DFS(i,0,0,i-1,0);
        db[i]=mxN;

    }

    for(int i=0;i<N;++i){
        if(db[i]>df[i])
            cout<<db[i]<<" ";
        else
            cout<<df[i]<<" ";
    }
    return 0;
}
