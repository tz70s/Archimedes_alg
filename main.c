#include <stdio.h>

int findGCDv1(int a,int b);
int findGCDv2(int a,int b);
int findGCDv3(int a,int b);

int main(void)
{
	int v = 0;
	int i,j;
	for(i=2;i<29999;i++){
		for(j=2;j<29999;j++)
		{
		v = findGCDv3(i,j);
		}
	}
	return 0;
}
