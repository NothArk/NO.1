# NO.1
Elimination of specific adjacent characters in a string（对字符串中特定相邻字符的消除）
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
