#include <iostream>
#include <climits>
using namespace std;
 void secondlargest();
 
 void secondlargest(){
     int max = INT_MIN;
     int max1 = INT_MIN;
     int size,a[1000000];
     cin>>size;
     
     for(int i=0;i<size;i++){
         cin>>a[i];
     }
     for(int i=0;i<size;i++){
     if(max < a[i]){
     max1 = max;
        max = a[i];
     }
        
        if(a[i]<max && a[i]>max1){
            max1 = a[i];
        }
     }
        
     
 }

int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    secondlargest();
	}
	return 0;
}
