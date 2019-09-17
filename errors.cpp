#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


 int main(){
 	int x,y,i;
cout<<" what numbers\n ";
cin>>y;
cin>>x;
i=1;
while (((i%x)|(i%y))!=0)
i++;

cout<<i;
return 0;
}
