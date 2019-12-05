#include <stdio.h>

void main()
{
	int i,j,r,q,e,cnt=0;
	int t[100][100];

	scanf("%d", &j);
	for(i=1;i<=j;j++)
	{
		for(r=0;r<50;r++)
		{
			scanf("%d",&q);
			for(e=0;e<q;e++)
				{
					t[r][e] = 1; //각 세대별 아파트 층수를 1로 설정
			}
					
			for(e=0;e<q;e++)
				{
					if(t[r-1][e] !=1 && t[r-2][e] !=1 && t[r+1][e] != 1 && t[r+2][e] !=1) //조망권확보할 조건
						//본인의 집에서 두 칸 바로 건너 층 안에 다른 아파트가 없어야 조망권을 확보한 것!
						cnt++;
			}
			
		}
		printf("조망권을 확보한 사람은 %d 칸", cnt);
		}
}