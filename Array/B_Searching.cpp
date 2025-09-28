#include<bits/stdc++.h>
using namespace std;

int findNumber(int A[], int N, int findNum){

    for(int i = 0; i < N; i++){
    
        if(A[i] == findNum){

            return i;
        }
    }
    return -1;

}

int main(){

    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i<N; i++)
        cin >> A[i];
    
    int findNum;
    cin >> findNum;

    int tergetNum = findNumber(A,N,findNum);
    cout << tergetNum << endl;


}