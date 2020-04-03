#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque <int> a(k);
    int i;
    for(i=0;i<k;i++)
    { 
        while(!a.empty() && arr[i]>arr[a.back()])
        {
            a.pop_back();
        }
        a.push_back(i);
      }
    for(;i<n;i++)
    {
        cout<<arr[a.front()]<<" ";
        while(!a.empty() && (a.front()<=(i-k)))
        {
            a.pop_front();
        }
        while(!a.empty() && arr[i]>=arr[a.back()])
        {
            a.pop_back();
        }

        a.push_back(i);
    
    }
    cout<<arr[a.front()];
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
        cout<<endl;
    	t--;
  	}
  	return 0;
}

