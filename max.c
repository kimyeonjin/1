#include <stdio.h>

int main()
{
	int x[10],s[10], k,i,max=0;

	for(k=0;k<10;k++)
		{scanf("%d", &x[k]);
		s[k] = x[k]/100; //���� �ڸ� ���� ���
		s[k] = s[k] + (x[k]%100)/10; //���� �ڸ� ���� ���
		s[k] = s[k] + (x[k]%100)%10; //���� �ڸ� ���� ���
	}

	for(i=0;i<=9;i++)
	{
		if(max<s[i] || max==s[i]) //�Է¹��� ������ �� �ڸ����� ���� ���� ū �� ã��!! max�� ����
			max = s[i];
	}
	printf("%d", max);

}