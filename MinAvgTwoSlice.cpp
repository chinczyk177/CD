#include<iostream>
#include<vector>
using namespace std;
int solution(vector<int>&A){

     int min = 0;
     double min_Value = 10001;
 
    for (int i=0;i<A.size()-1;i++)
    {    if ((A[i] + A[i+1])/2.0 < min_Value)
           {
		    min = i;
            min_Value = (A[i] + A[i+1])/2.0;
           }
		if ( (i < A.size()-2) && ((A[i] + A[i+1] + A[i+2])/3.0 < min_Value))
		    {
            min = i;
            min_Value = (A[i] + A[i+1] + A[i+2])/3.0;
            }
    }
    return min;

}
