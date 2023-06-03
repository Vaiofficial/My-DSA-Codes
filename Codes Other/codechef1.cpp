#include <iostream>
using namespace std;

int main() {
	
	int num1, num2,i=0 , testcases;
	
	cin>>testcases;

	while(i<testcases)
	{
	    cin>>num1>>num2;
	    
	    if(num1<num2)
	    cout<<'<';
	    
	    else if(num1>num2)
	    cout<<'>';
	    
	    else if(num1==num2)
	    cout<<'=';
	}
	return 0;
}
