#include <iostream>
using namespace std;

int main(){
	int aryr[10];
	int X, inp=0, size, i=0;
	bool flag=false;
	while(inp != -1){
		cout<<"Enter a Value for Array, Press -1 to Quit!";
		cin>>inp;
		if(inp==-1){
	
			break;
		}
		else{
			aryr[i]=inp;
			i++;   
		}
	}
	cout<<"Enter Number for Which Triplet is Required: ";
	cin>>X;
	size=sizeof(aryr)/sizeof(aryr[0]);
	 for (i = 0; i < size - 2; ++i) {
        for (int j = i + 1; j < size - 1; ++j) {
            for (int k = j + 1; k < size; ++k) {
                if (aryr[i] + aryr[j] + aryr[k] == X) {
                    cout << "Triplet: " << aryr[i] << " " << aryr[j] << " " << aryr[k] << endl;
                    flag=true;
                }
            }
        }
    }
	if(flag==false){
		cout<<"Triplet not Found!";
	}

}
