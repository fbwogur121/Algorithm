#include <stdio.h>
#include <stdlib.h>
int solution(int n)
{
	if(n<100)
		return n;
	else
	{
		int idx = 99;
		for(int i = 100; i <= n; i++)
		{
			int hun = i/100;
			int ten = (i%100)/10;
			int one = (i%100)%10;
			if((ten-hun) == (one-ten))	
				idx += 1;
		}
		return idx;
	}
	
}

int main(void)
{
	int N; // 1 <= N <= 1000	
	scanf("%d",&N);
	
	printf("%d",solution(N));
	return 0;
} 