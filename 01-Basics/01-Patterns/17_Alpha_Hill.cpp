#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char alpha;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            cout << " ";
        }
        alpha = 'A';
        for(int k=0;k<i+1;k++){
            cout << alpha;
            alpha++;
        }
        alpha--;
        alpha--;
        for(int l=0;l<i;l++){
            cout << alpha;
            alpha--;
        }
        cout << endl;
    }
    return 0;
}