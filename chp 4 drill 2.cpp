#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


 int main(){
double e;

// re ad some tempe rature s into a ve ctor
char q;
int i =0,k=0;
vector<double> temps; // tempe rature s
for (double temp; cin>>temp;i++ ) // re ad into temp
	{
	temps.push_back(temp);
			k=0;
		while(k<i){
		
		cout<<temps[k]<<",";
		k++;};
			cout<<"\n";
	}; 
	
if (i%2==0)
cout<<"error";

else 

cout<<temps[1];


// . . . do some thing . . .




return 0;}
