#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &A) {
 
     const int N=1000000;
     int Count[N+1]={0} ;  
     
	for(auto &i:A)
        if(i>0)
          Count[i]++;
       
	 for(int i=1;i<=N;i++)
	    if(Count[i]==0)
	        return i;
 
return N+1;
}
