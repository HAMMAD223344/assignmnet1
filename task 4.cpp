#include<iostream>
using namespace std;
int main(){
int n;
	int num;
	cout<<"Please enter the number"<<endl;
	cin>>n;
	for(int i=n; i>=2; i-=1){
		for(int j=2; j<=i; j+=1){
			if(i%j==0 && i==j){num = j;}
			if(i%j==0){break;}
			}
		if(num == i){break;}
		}
	cout<<"The largest prime is: "<<num<<endl;	
return 0;
}
