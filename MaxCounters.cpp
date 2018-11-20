#include<iostream>
#include<vector>
using namespace std;
vector<int> solution(int N, vector<int> &A) {
 	vector<int>tab(N,0);
	   
	   int max=0; 
	   int Max=0;  
	   
		   for(auto &i:A)
	       {
	       	      if(i>N) Max=max; 
	       	     
	       	            else{
				            
							 if(tab[i-1]<Max)
				              tab[i-1]=Max;
				  
				              tab[i-1]++;
				 
				              if(tab[i-1]>max)max=tab[i-1];   			                    
		                    }		                    
		   }
	  for(auto &i:tab)
	     if(i<Max)
	        i=Max;
	        
return tab; 	        
}
