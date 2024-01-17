#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> res;
	// Write your code here 
	vector<int> freq(n,0);
	for(int i=0;i<n;i++){
		if(freq[arr[i]-1]==0){
			freq[arr[i]-1] = 1;
		}
		else 
		{
			int r = arr[i];
            res.second = r;
		
		}
	}
	for(int i=0;i<n;i++){
		if(freq[i]==0)
		{
			int m = i+1;
			res.first = m;
			break;
		}
	}
	return res;
	
}
