#include<iostream>
#include<ctype.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string.h>
using namespace std;


 int main()
 {
	int valuesRead[2] = {0, 0 };
	bool bError=false;
	int nIntsRead=0;
	bool bnonnumeric=false;

	while (!bError)

	{
		
		bool bSawBreak = false;
		char buf[256];
		int i= fscanf(stdin, "%s", &buf);
		if (i == 1)
		{
		
			// valid string
		    printf("the input is %s\n", buf);
		    int len = strlen(buf);
		    for (int pos = 0; pos < len; pos++)
		    {
		    	// scan until not a numeric character
		    	if (buf[pos] == '|')
		    	{ 
		    		bSawBreak = true;
		    		buf[pos]='\0';
		    		bnonnumeric=true;
				}
				
		    	else if (!isdigit(buf[pos]))
		    	{
		    		buf[pos]='\0';
		    		bnonnumeric=true;
		    		
				}	
				
				 if (bSawBreak||bnonnumeric)
				 	break;
				
				
				
			}
			
			if (buf[0]=='\0')
				bError=true;
			else 
			{
				int value;
				int error=sscanf(buf, "%d", &value);
				if (error ==1)
				{
					valuesRead[nIntsRead] = value;
					nIntsRead++;
				}
				
			}	
			
			
		}
		else
		{
			// error bad input
			printf("bad string\n");
			bError = true;
		}
		
		if (nIntsRead == 2)
			break;
			
		
	}

	printf("bError = %d    int 1=%f   int 2 =%d\n", bError, valuesRead[0], valuesRead[1]);

	
	return 0;
}
	
