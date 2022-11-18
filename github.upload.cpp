#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
    scanf("%d %d",&x,&y);
    if(y==0)
        printf("%d\n",x);
    else
      printf("%d\n",x%y);
	}
	return 0;
}
