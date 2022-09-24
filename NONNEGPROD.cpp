#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;

	while(t--){
	    	int count=0;
	    	int zero=0;
	    cin>>n;
	    int num;
	    for(int i=0;i<n;i++){
	       cin>>num;
	      if(num==0){
	          zero=1;
	      } 
	      if(num<0){
	          count++;
	      }
	    }
	    if(zero==1 || count%2==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}