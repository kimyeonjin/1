#include <stdio.h>
#include <math.h>


int main()
{
	int k, kf;
	double e,a,l;
	//1. 제곱근 - sqrt()
	printf("1. 25의 제곱근은? %.0lf \n", sqrt(25.0));
	//2. 로그 - log(),  log10()
	printf("2. log 30 은 %.2lf \n", log(30.0));
	printf("   log10 1000 은 %.2lf \n", log10(1000.0));
	//3. 삼각비 - sin()
	printf("3. sin(10)은 %lf \n", sin(10.0));
	//4. 삼각비 - cos()
	printf("4. cos(10)은 %lf \n", cos(10.0));
	//5. 삼각비 - tan()
	printf("5. tan(10)은 %lf \n", tan(10.0));
	//6. 지수 계산 - exp()
	printf("6. e의 4승은 %.2lf \n", exp(4.0));
	//7. 가장작은 정수(올림) - ceil()
	printf("7. 7과 같거나 7보다 큰 정수 중 가장 작은 정수는 %.2lf \n", ceil(7.0));
	//8. 가장 큰 정수(가우스 함수)(내림) - floor()
	printf("8. 7.1과 같거나 7.1보다 작은 정수 중 가장 작은 정수는 %.2lf \n", floor(7.1));
	//9. 역삼각함수 - asin()
	printf("9. asin(0.5)은 %.2lf \n", asin(0.5));
	//10. 역삼각함수 - acos()
	printf("10. acos(0.5)은 %.2lf \n", acos(0.5));
	//11. 역삼각함수 - atan()
	printf("11. atan(0.5)은 %.2lf \n", atan(0.5));
	//12. 쌍곡선함수 - sinh()
	printf("12. sinh(0.7)은 %.2lf \n", sinh(0.7));
	//13. 쌍곡선함수 - cosh()
	printf("13. cosh(0.7)은 %.2lf \n", cosh(0.7));
	//14. 쌍곡선함수 - tanh()
	printf("14. tanh(0.7)은 %.2lf \n", tanh(0.7));
	//15. 지수와 가수 계산 - frexp(,)
	e = frexp(6.5,&k);
	printf("15. %.2lf = %.2lf*2^%d \n", 6.5, e,k);
	//16. x*2^exp를 반환 - ldexp(,)
	printf("16. %.2lf*2^%d=%.2lf \n", 6.5,2,ldexp(6.5,2));
	//17. 나머지 - fmod(,)
	printf("17. 52를 7로 나눈 나머지는 %.0lf \n", fmod(52.0,7));
	//18. 밑이 0인 제 1종 베셀 함수 - j0()
	printf("18. 3.0 -j0-> %lf \n", j0(3.0));
	//19. 밑이 1인 제 1종 베셀 함수 - j1()
	printf("19. 3.0 -j1-> %lf \n", j1(3.0));
	//20. 밑이 n인 제 1종 베셀 함수 - jn()
	printf("20. 3.0 -j2-> 밑이 2, %lf \n", jn(2,3.0));
	//21. 밑이 0인 제 2종 베셀 함수 - y0()
	printf("21. 3.0 -y0-> %lf \n", y0(3.0));
	//22. 밑이 1인 제 2종 베셀 함수 - y1()
	printf("22. 3.0 -y1-> %lf \n", y1(3.0));
	//23. 밑이 n인 제 2종 베셀 함수 - yn()
	printf("23. 3.0 -y2-> 밑이 2, %lf \n", yn(2,3.0));
	//24. 정수부, 실수부 쪼개기 - modf(,)
	printf("24. 5.4의 실수부는 %.2lf \n", modf(5.4,&a));
	//25. 직각삼각형 빗변 계산 - _hypot(,)
	printf("25. 밑변이 4, 높이가 3인 직각삼각형의 빗변은 %.2lf \n", _hypot(4.0,3.0));
	//26.y/x의 아크 탄젠트 - atan(,)
	printf("26. atan(5/3) = %lf \n", atan2(5.0,3));
	//27. double형의 절대값 - fabs()
	printf("27. -5.4의 절대값은 %.1lf \n", fabs(-5.4));
	//28. long형의 절대값 - labs()
	printf("28. -5.4의 절대값은 %.1lf \n", labs(-5.4));
	//29. 문자열을 double형으로 - atof()
	printf("29. %lf \n", atof("5.1584"));
	//30. float형의 지수와 가수 계산 - frexpf(,)
	l = frexpf(6.5,&kf);
	printf("30. %.2lf = %.2lf*2^%d \n", 6.5, l,kf);
}