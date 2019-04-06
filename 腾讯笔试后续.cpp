#include <iostream>
#include <string>
using namespace std;
void main (){
	int n,k,j=0;
	cin >> n;
	string s;
	cin >> s;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		int x;
		x=(int)s[i];
		if(j==0){
			a[j]=x;
		}
		else{
			k=j-1;
			if(x+a[k]==97){
				j=j-2;
			}
			else{
				a[j]=x;
			}
		}
		j++;
	}
	cout<<j<<endl;
}