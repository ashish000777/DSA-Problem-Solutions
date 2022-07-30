#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--)
	{
	    int a, b, c;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	        if(c>b)
	        {
	            cout<<c<<endl;
	        }
	        else 
	        {
	            cout<<b<<endl;
	        }
	    }
	    else if(b>a && b>c){
	        if(a>c){
	            cout<<a<<endl;
	        }
	        else{
	            cout<<b<<endl;
	        }
	    }
	    else
	    {
	        if(a>b)
	        {
	            cout<<a<<endl;
	        }
	        else{
	            cout<<b<<endl;
	        }
	    }
	}
	
	
	return 0;
}
