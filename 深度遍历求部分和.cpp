#include<iostream>
using namespace std;
int a[100];
int n;
int k;
int DFS(int i,int sum){
	if(i == n)
		return sum == k;
	if(DFS(i+1,sum))
		return 1;
	if(DFS(i+1,sum + a[i]))
		return 1;
	return 0;
}
int main(){
	
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	if(DFS(0,0)){
		cout<<"yes"<<endl;
	}
	else cout<<"no"<<endl;
return 0;
} 
