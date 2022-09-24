#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        
        int sleep_time;
        cin>>sleep_time;
        
        if(sleep_time<7){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
        
        
        t--;
    }
	// your code goes here
	return 0;
}