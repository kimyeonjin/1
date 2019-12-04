#include <stdio.h>
#include <stdlib.h> //파일 입출력 위한 헤더

int main(){
    FILE *fin, *fout;
    fin=fopen("input3.txt","r"); //읽기
    fout=fopen("output3.txt","w"); //쓰기

    int i, a, t, ave, number[10], sum = 0;

    fscanf(fin, "%d", &t);

    for(a=1;a<=t;a++){
            sum =0;
            for(i=0;i<10;i++){
				fscanf(fin,"%d", &number[i]);
				if(( number[i] < 0 )||( number[i] > 1000)){ //수를 잘못 입력하였을 경우 no출력
					fprintf(fout, "no");
						}
				sum += number[i]; 
			}
			ave = (sum/10); //평균 구하기
            if(sum % 10 >=5){//반올림해주기 위해 나머지로 판단 5이상 일시 올려주기
                ave += 1;
            }
			fprintf(fout, "#%d %d\n", a, ave);

	}

    fclose(fin);
    fclose(fout);

    return 0;
}
