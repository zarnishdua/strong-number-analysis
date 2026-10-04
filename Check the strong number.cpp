#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :";
	cin>>n;
	int original=n;
	int lastdigit;
	int sum=0;
	while(n>0){
		int factorial=1;
		lastdigit=n%10;
		n=n/10;
	for(int i=lastdigit; i>=1; i--){
	factorial=factorial*i;		
	}
	sum=sum+factorial;
     }
     if(original==sum)
     cout<<"This is a strong number ";
     else
     cout<<"This is not a strong number ";
     return 0;
}
