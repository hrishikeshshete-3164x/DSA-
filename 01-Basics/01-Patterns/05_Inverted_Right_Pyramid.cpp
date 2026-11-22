#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m=n;
    for(int i=0;i<m;i++){
        for(int j=n;j>0;j--){
            cout << "*";
        }
        n--;
        cout << endl;
    }
    return 0;
}