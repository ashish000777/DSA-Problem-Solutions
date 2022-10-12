#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N, consCount = 0, shift = 0;
	    cin>>N;
	    string S;
	    cin>>S;
	    for(int i=0;i<N;i++)
	    {
	        char ch = S[i];
	        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	        {
	            consCount = 0;
	            continue;
	        }
	        else{
	            consCount++;
	            if(consCount >= 4)
	            {
	                shift = 1;
	                break;
	            }
	        }
	    }
	    if(!shift)
	    {
	        cout<<"Yes"<<"\n";
	    }
	    else{
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
