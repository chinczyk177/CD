#include<iostream>
#include<vector>
using namespace std;
int solution(int X, int Y, int D) {

       if(X==Y)return 0;
       int d=Y-X;
   
       if(d%D==0)
       return d/D;
       else
       return d/D+1;

}

