#include <iostream>
using namespace std;

int main(){
	int n;
    cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i){
				cout << "* ";
			}
		}
		for(int k=0;k<(2*(n-i-1));k++){
			cout << "  ";
		}
		for(int l=0;l<i+1;l++){
			cout << "* ";
		}
		cout << endl;
	}
	for(int a=1;a<n;a++){
		for(int b=(n-a);b>0;b--){
			cout << "* ";
		}
		for(int c=0;c<2*a;c++){
			cout << "  ";
		}
		for(int d=0;d<n;d++){
			if(a<=d){
				cout << "* ";
			}
		}
		cout << "\n";
	}
	return 0;
}