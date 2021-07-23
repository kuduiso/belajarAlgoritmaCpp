#include<iostream>
using namespace std;

int main() {
    long long N;
    cin>>N;

    int divisorCount = 0;
    for(int i = 1; i <= N; i++) {
        if (N%i == 0) {
            divisorCount++;
        }
    }

    if (divisorCount % 2 == 0) {
        cout<<"lampu mati"<<endl;
    } else {
        cout<<"lampu menyala"<<endl;
    }
}
