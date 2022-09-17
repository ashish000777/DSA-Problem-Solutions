#include <iostream>
using namespace std;

int main() {
	int T; // number of test cases
	cin>>T;
	while(T--)
	{
	    int X; // Denoting the seat number
	    cin>>X;
	    if(X<=50)
	    {
	        cout<<"LEFT\n";
	    }
	    else{
	        cout<<"RIGHT\n";
	    }
	}
	return 0;
}
