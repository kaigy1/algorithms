#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


 int main(){
long long int k,e;
int i;
	for (k=0,i=0,e=1;i<64;i++)
		{   k+=e;
		  cout<<k<<"     "<<e;
			cout<<"\n";
			e*=2;	 
				
		};
	cout<<"number of rices in "<<i<<" box: " <<e/2<< "\n"<<"number of rices total:"<< k<<"\n";
	
cout<<k;

return 0;}
