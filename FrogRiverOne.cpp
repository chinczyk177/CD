#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(int X, vector<int> &A) {
    
             const int N=A.size();         		 
			 vector<int>V(X+1,0);	
			 int SumX=(X+1)*X/2;
	          int sum=0; 	
			 		 		 	   		   			     		   	      
          for(int i=0;i<N;i++)              
            {
            	 if(V[A[i]]==0) sum+=A[i];
                 V[A[i]]++;         		
				 if(sum==SumX) 
				 return i;  	       
            }      	              
return -1;     
}

