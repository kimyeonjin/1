//자연수 입력 받아, 100넘을 시 그 합과 더해진 횟수를 출력
/*#include <stdio.h>

int main(void)
{
	int n, count=0, sum=0;

	do{
	printf("값 입력");
	scanf("%d", &n);
	sum+=n;
	count++;}
	while(sum<100);

	printf("합은 ? %d 횟수는? %d",sum, count);

	return 0;
}*/

//임의의 두 정수를 입력받아서 두 정수 사이에 있는 수의 합을 구하시오.
/*#include <stdio.h>

int main(void)
{
	int n1, n2,sum=0,c;

	printf("두수 입력");
	scanf("%d%d", &n1,&n2);

	if(n1>n2){
		c=n1;
		n1=n2;
		n2=c;}

	c=n1;
	for(n1;n1<=n2;n1++)
		sum+=n1;
	printf("sum : %d", sum);
}
*/
/*#include <stdio.h>

int main(void)
{
	int i,j,k,tot, c=0;
	
	for(i=1;i<=10;i++)
		for(j=1;j<=10;j++)
			for(k=1;k<=10;k++)
			{
				tot = 5*i+3*j+2*k;
				if(tot==81)
				{
					c++;
					printf("2 : %3d, 3 : %3d, 5 : %3d\n", k,j,i);
				}
			}
			printf("81g인 경우의 수 : %d", c);

			return 0;
}*/

//윤년 판단
/*#include <stdio.h>

void main()
{
	int year;

	printf("윤년을 확인할 년?");
	scanf("%d", &year);

	if(year%100!=0 && year%4==0 && year%400 ==0)
		printf("%d년은 윤년!",year);
	else
		printf("%d년은 윤년이 아님!", year);
}
*/

//구구단 출력
/*#include <stdio.h>

int main(void)
{
	int i,j;

	for(i=1;i<=9;i++)
		{for(j=2;j<=9;j++)
		{printf("%2d*%2d = %2d", j,i,j*i);}
	printf(" \n");}
}
*/
//1에서 100사이 정수의 짝수와 홀수의 합
/*
#include <stdio.h>

int main(void)
{
	int i, sum1=0, sum2=0;

	for(i=1;i<=100;i++)
		{if(i%2==0)
			sum2+=i;
		else sum1+=i;}
	printf("짝수 : %d, 홀수 : %d",sum2,sum1);
}
*/


//임의의 정수 a의 n승
/*#include <stdio.h>
int main(void)
{
	int a, n,i,s=1;

	printf("피제수");
	scanf("%d",&a);

	printf("제수");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
		s *= a;
	printf("%d의 %d승은 %d", a,n, s);
}*/
/*
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("\t %d바이트", sizeof(signed short));
	printf("값의 범위 : %d~%d", SHRT_MIN, SHRT_MAX);
}*/
/*
#include <stdio.h>

int main()
{

	int n=5;
	printf("%d*%d=%.2lf \n",n,2,n/2);
	printf("%d*%d=%d \n",n,2,n/2);
	printf("%d/%d=\
		 %.2lf \n",  n,2,(double)n/2);
	printf("%d/%d=%.2lf \n", n,2,(double)(n/2));
	printf("n =%lf \n", n);
}
*/
/*#include <stdio.h>

int main() {

	int n;
	
	printf("숫자를 입력하시오. ");
	scanf("%d", &n);
	printf("%d/%d=%.2lf \n", 5,2,5.0/2);//하나라도 정수형이 아닌 실수형이여야. 그러면 나머지 살음
	printf("%d/%d=%.2lf \n", n,2,n/2);//그냥 해본거
	printf("%d/%d=%d \n", n,2,n/2);//그냥 해본거
	printf("%d/%d=%.2lf \n", n,2,(double)n/2);//변수에는 .0을 붙일 수 없다. -> cast 연산자, 계산하는 순간에만 실수형으로 변경
	printf("%d/%d=%.2lf \n", n,2,(double)(n/2));//이렇게 해버리면 계산한 결과를 double형으로 바꿈 결과는 2.00이 나옴 
	printf("n =%lf \n", n);
	return 0;

} */
/*
#include <stdio.h>

void main()
{
	double dNum, *dp;

	dNum = 7.5;
	printf("dNum : %lf, &dNum : %p \n\n", dNum, &dNum);
	//전자 : dNum의 값 - 7.5, 후자 : &dNum(dNum이 저장되어 있는 주소) - 임의의 값

	dp = &dNum;//dNum의 주소를 dp로 넣는다.
	printf("*dp  : %lf, dp : %p \n",*dp, dp);
	//*dp : dNum 주소의 값, dp : dNum의 주소
}
*/
/*
#include <stdio.h>

void main()
{
	char ch, *cp;
	int num, *ip;
	float fnum, *fp;
	double dnum, *dp;

	printf("변수의 크기 : %3d %3d %3d %3d\n", sizeof(ch), sizeof(num), sizeof(dnum), sizeof(fnum));

	printf("포인터 변수의 크기 : %3d %3d %3d %3d \n", sizeof(cp), sizeof(ip), sizeof(dp), sizeof(fp));
	//포인터 변수는 자료형이 달라도 모두 4바이트 출력

	cp = &dnum;
	printf("\ncp가 참조한 값 : %lf \n\n", *cp);
}
*/
/*
#include <stdio.h>

void main()
{
	char ch, *cp;
	int num, *ip;
	float fnum, *fp;
	double dnum, *dp;

	ch = 'A';
	num = 100;
	fnum = 5.6;
	dnum = 17.5;

	cp = &ch;
	ip = &num;
	fp = &fnum;
	dp = &dnum;

	printf("변수들의 시작주소 : %p %p %p %p \n", &ch,&num,&fnum,&dnum);
	printf("변수들의 값 : %5c %5d %10.2lf %10.2lf \n", ch,num,fnum,dnum);

	printf("포인터 변수에 저장된 주소 : %p %p %p %p \n", cp,ip,fp,dp);
	printf("포인터 변수가 참조한 값 : %5c %5d %10.2lf %10.2lf \n", *cp,*ip,*fp,*dp);
}
*/
/*
#include <stdio.h>

int main()
{
	int num = 100;
	int *ip, **mip;

	ip = &num;//num의 시작주소를 ip에 저장
	mip = &ip; //ip의 시작주소를 mip에 저장

	printf("%d %d %d \n\n", sizeof(num), sizeof(ip), sizeof(mip));

	printf("%d %d %d \n", num, *ip, **mip);

	**mip = 350; //num = 350

	printf("%d %d %d \n", num, *ip, **mip);

	return 0;
}
*/
/*
#include <stdio.h>

void main()
{
	char ch, *cp;
	int num, *ip;
	float fnum, *fp;
	double dnum, *dp;

	ch = 'A';
	num = 100;
	fnum = 5.6;
	dnum = 17.5;

	cp = &ch;
	ip = &num;
	fp = &fnum;
	dp = &dnum;

	printf("1 증가하기 전 변수와 포인터 변수 \n");
	printf("변수들의 값 : %5c %5d %10.2lf %10.2lf \n", ch,num,fnum,dnum);
	printf("포인터 변수에 저장된 주소 : %p %p %p %p \n", cp,ip,fp,dp);

	ch++;num++;fnum++;dnum++;
	cp++;ip++;fp++;dp++; //주소를 1증가, 자료형 크기만큼

	printf("1 증가한 후 변수와 포인터 변수 \n");
	printf("변수들의 값 : %5c %5d %10.2lf %10.2lf \n", ch,num,fnum,dnum);
	printf("포인터 변수에 저장된 주소 : %p %p %p %p \n", cp,ip,fp,dp);
	//그래서 자료형 크기인 char +1, int +4, float +4, double +8

}
*/
/*
#include <stdio.h>

void main()
{
	int num, tmp=0, *ptr;

	ptr = &num;
	num = 100;

	printf("num: %d, tmp=%d, ptr : %p \n\n", num, tmp, ptr);

	tmp = (*ptr)++; //ptr은 주소의 데이터를 먼저 참조, 값 증가라서 주소의 증감 없음 //괄호를 먼저 넣어주고 ++해줌
	printf("num: %d, tmp=%d, ptr : %p \n\n", num, tmp, ptr);

	tmp = *ptr++; //ptr은 주소 증가연산이 우선순위 높음(그러나 후위연산)
	printf("num: %d, tmp=%d, ptr : %p \n\n", num, tmp, ptr);
}
*/
/*
#include <stdio.h>

void main()
{
	int count[6] = {100,200,300,400,500}, i;
	int *ptr;

	ptr = count; //배열의 시작주소 대입

	printf("배열의 시작주소 : %p %p %p \n\n", count, &count[0], ptr);

	printf("첨자를 이용한 출력\n");

	for(i=0;i<6;i++)
		printf("%d", count[i]);
	printf("\n\n");

	printf("배열변수를 이용한 포인터 연산\n");
	for(i=0;i<6;i++)
		printf("%d, ", *(count+i));
	printf("\n\n");

	printf("포인터 변수를 이용한 포인터 연산\n");
	for(i=0;i<6;i++)
			printf("%d, ", *(ptr+i));
	printf("\n\n");
}
*/
/*
#include <stdio.h>

int main(void)
{
	char str[20] = "Multi Campus. ";
	char *ptr;

	ptr = str; //배열의 시작 주소 대입

	while(*ptr)
		printf("%c", *ptr++);//후위연산, 출력 후 다음 주소로 증가
	printf("\n\n");
}
*/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "Multi Campus";
	char *msg = "Advanced C.";

	printf("str : %s, msg :%s\n", str, msg);

	strcpy(str,msg);
	printf("str : %s, msg : %s\n", str, msg);

	printf("input str?");
	gets(str);

	strcpy(msg, str);
	printf("str : %s, msg : %s \n", str, msg);
}


*/
/*
#include <stdio.h>

void main()
{
	int score[21] = {57,87,64,86,97,78,61,81,73,37,54},i, sum =0, cn = 0;
	int *ptr;
	ptr = score;
	printf("학생들의 점수\n");
	while(*ptr)
		{
			cn += 1;
			*ptr++;
	}
	
	for(i=0;i<cn;i++)
		{
			printf("%d, ", *(score+i));
			sum += *(score+i);
	}

	printf("\n인원수 : %d", cn);
	printf("\n합 : %d, 평균 : %.2lf \n", sum, (double)(sum)/cn);
}
*/
/*
#include <stdio.h>

void main()
{
	char str[20] = "Multi Campus.";
	char *ptr;
	
	printf("before : %s\n\n", str);

	ptr = str;

	while(*ptr)
	{
		if(*ptr!=' ' && *ptr!='.')
		{
			if(*ptr>=97)
				*ptr -= 32;
			else *ptr += 32;
			}
		*ptr++;
	}

	printf("after : %s", str);
}
*/
/*
#include <stdio.h>

int fun(int *p);

void main()

{

	int age=20;

	printf("나이는 %d\n", age);

	printf("나이는 %d\n", fun(&age));

	printf("나이는 %d\n", age);

}

int fun(const int *p) //const해버리면 값 변경 X, 새로운 변수를 생성해서 대입해야

{

	int nai = *p;

	nai+= 5;

	//*p = *p+5;

	return nai;

 

}
*/
#include <stdio.h>

void main()

{

	int age = 20,year =2;

	const int *p = &age; //p 자체는 변경가능하지만 p가 가르키는 변수의 주소의 내용을 못바꾸는 것임!!

	int * const c = &age; //이거는 변경을 못함. 변수 앞에 붙으면 위에꺼 안됨.

 

	printf("나이 : %d\n", age);

	printf("나이 : %d\n", *p);

 

	age = age+3;

	//*p = *p+3;

	printf("나이 : %d\n", age);

	p = &year;

	//c = &year; // 변수의 변경도 안되서 오류뜸

	printf("학년 : %d\n", *p);

 

}