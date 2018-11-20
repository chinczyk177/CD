#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int> &A) {

             const int N=A.size();
             
			 vector<int>V(N+1,0);
		       		      
        for(int i=0;i<N;i++)              
            {if(A[i]>N)return false;
            V[A[i]]++;                             ////counts element with certain value 
            }

  for(int i=1;i<V.size();i++)
     if(V[i]!=1)
         return false;

return true; 
}


