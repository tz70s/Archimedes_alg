#include <stdio.h>

int findGCDv2(int a , int b)
{
	while(1)
	{
		a %= b;
		if(a==0)
			return b;
		if(a==1)
			return 1;
		b %= a;
		if(b==0)
			return a;
		if(b==1)
			return 1;
	}
}
