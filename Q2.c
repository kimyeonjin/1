#include <stdio.h>
#include <stdlib.h> //파일 입출력을 위해서는 헤더파일 필요

int main(){

    FILE *fin, *fout; //파일 입출력
    fin=fopen("input2.txt","r"); //읽기 전용
    fout=fopen("output2.txt","w");//쓰기 전용

    int i,j,k,t, a,date, year, month, day;

    fscanf(fin,"%d", &t);
    for(a=1;a<=t;a++){
            fscanf(fin, "%d", &date);
            year = (date / 10000); //몫
            month =((date % 10000) / 100); //year로 나눈 나머지를 다시 계산해 월 구하기
            day =((date % 10000) % 100);

			switch(month){ //각 달별로 조건 설정해주기, month라는 변수에 대한 것이니 switch문 쓰기! if문은 너무 복잡하다.
			case 1 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 2 : if(day<=0 || day>28){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 3 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 4 : if(day<=0 || day>30){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 5 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 6 : if(day<=0 || day>30){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 7 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 8 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 9 : if(day<=0 || day>30){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 10 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 11 : if(day<=0 || day>30){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			case 12 : if(day<=0 || day>31){fprintf(fout, "#%d -1\n", a);} else{fprintf(fout, "#%d %04d/%02d/%02d\n", a, year, month, day);} break;
			default : fprintf(fout, "#%d -1\n", a); break;
			}
    }

    fclose(fin);
    fclose(fout);

    return 0;

}
