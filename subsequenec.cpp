//subsequenec
#include <iostream>
#include <vector>
using namespace std;
void subseq(int arr[],int inx,int n,vector<int> vec,vector<vector<int> > &bigvec){
    if(inx==n){
        bigvec.push_back(vec);
        return;
    }
    
    //not pick
    subseq( arr, inx+1, n, vec, bigvec);
    
    //pick
    vec.push_back(arr[inx]);
     subseq( arr, inx+1, n, vec, bigvec);
}
int main() {
    int arr[100],n,i;
    vector<int> vec;
    vector<vector<int> > bigvec;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    subseq(arr,0,n,vec,bigvec);
    for(i=0;i<bigvec.size();i++){
        for(int j =0;j<bigvec[i].size();j++){
            cout<<bigvec[i][j];
        }
        cout<<endl;
    }
    return 0;
}