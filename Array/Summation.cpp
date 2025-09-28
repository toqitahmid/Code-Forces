#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<long long> A(N);

    for(long long int i = 0; i < N; i++)
        cin >> A[i];
    
    long long int sum = 0;

    for(long long int i = 0; i < N; i++){

        sum += A[i];
    }

    cout << llabs(sum) <<endl;
}