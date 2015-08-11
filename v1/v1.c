#include <stdio.h>

int findGCDv1(int a , int b)
{
	while(1)
	{
		if(a>b)
			a-=b;
		else if(a<b)
			b -=a;
		else 
			return a;
	}
}
