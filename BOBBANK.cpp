#include <iostream>
using namespace std;

int main() {
	int T; // Number of test cases
	cin>>T;
	while(T--)
	{
	    int W, X, Y, Z;
	    cin>>W>>X>>Y>>Z; /* Initial Amount, Amount deposited per month, Amount deducted per month, Number of months */ 
	    int final_balance;
	    if(X>Y)
	    {
	        final_balance = W + (X-Y) * Z;
	        cout<<final_balance<<"\n";
	    }
	    else{
	        final_balance = W - (Y-X) * Z;
	        cout<<final_balance<<"\n";
	    }
	}
	return 0;
}
