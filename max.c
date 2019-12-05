#include <stdio.h>

int main()
{
	int x[10],s[10], k,i,max=0;

	for(k=0;k<10;k++)
		{scanf("%d", &x[k]);
		s[k] = x[k]/100; //백의 자리 숫자 출력
		s[k] = s[k] + (x[k]%100)/10; //십의 자리 숫자 출력
		s[k] = s[k] + (x[k]%100)%10; //일의 자리 숫자 출력
	}

	for(i=0;i<=9;i++)
	{
		if(max<s[i] || max==s[i]) //입력받은 수에서 각 자릿수의 합이 가장 큰 것 찾기!! max값 설정
			max = s[i];
	}
	printf("%d", max);

}