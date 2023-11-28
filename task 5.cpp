#include<iostream>
#include <cstring>
using namespace std;

int main(){


char num1[10];
	char num2[10];

	cout<<"Please enter the strings"<<endl;
	cin>>num1;
	cin>>num2;
	int p = strlen(num2)-1;
	char num3[p];
	if(strcmp(num1, num2)==0){
		for(int i=0; i<10; i+=1){
			num3[p]=num2[i];
			p=p-1;}	
		cout<<"The reversed string is: "<<num3<<endl;}
	else{cout<<"the strings are not the same"<<endl;}
	return 0;
}
