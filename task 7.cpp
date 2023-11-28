 #include<iostream>
 #include<string.h>
 using namespace std;
 int main(){
 	
  
  string S,newS;
  int i,j;
  cout<<"Enter any  string:"<<endl; //input a string from the user
  cin>>S;
  cout<<endl;
  for(i=0;i<S.length();i++){ 
  	for( j=0;j<S.length();j++){  
  	if(S[i]==S[j]){ 
	 break; }         
	} if(i==j){    
	 newS+=S[i]; } 
  } cout<<"sting without duplicate characters: "<<newS; //cout the new string
 return 0;
}
