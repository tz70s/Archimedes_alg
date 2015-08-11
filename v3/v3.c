#include <stdio.h>

int findGCDv3(int a , int b)
{
	while(1)
	{
		if(a>(b*4))
		{
			a%=b;
			if(a==0)
				return b;
			if(a==1)
				return 1;
		}
		else if(a>=b)
		{
			a -= b;
			if(a==0)
				return a;
			if(b==1)
				return 1;
		}
		if(b>(a*4))
		{
			b%=a;
			if(b==0)
				return a;
			if(b==1)
				return 1;
		}
		else if(b>=a)
		{
			b-=a;
			if(b==0)
				return a;
			if(b==1)
				return 1;
		}
	}
}
