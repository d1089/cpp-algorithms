#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(){
    lld t;
    cin >> t;
    for(int c = 1; c <= t; c++){
    	lld n, b, count, temp;
    	vector<int> a;
      
    	cin >> n >> b;
      
    	count = 0;
      
		for(int i = 0; i < n; i++){
        cin >> temp;
	      a.push_back(temp);
		}
    
		sort(a.begin(), a.end());   // crucial step to consider
    
		for(int i = 0; i < n; i++){
	        if(b >= a[i]){
	            b = b - a[i];
	            count++;
	        }else
	            continue;
	    }
      
		cout << "Case #" << c << ": " << count <<endl;
    }   
    return 0;
}
