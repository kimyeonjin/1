#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fin, *fout; //파일 입출력
    fin=fopen("input.txt","r"); //파일을 읽기형태로 받아올 것
    fout=fopen("output.txt","w"); //파일을 씀
   // assert((fin!=NULL)&&(fout!=NULL));

    int a,t, number[10], sum=0;

    fscanf(fin,"%d", &t);
    for(a=1;a<=t;a++){
        for(int i=0;i<10;i++){
            fscanf(fin, "%d", &number[i]); //홀수일 때 합할 조건 생성
            if(number[i]%2==1){
                sum += number[i]; //sum 초기화 안하면 쓰레기값을 가지므로 처음에 sum=0으로 초기화 해주기
            }
        }
            fprintf(fout, "#%d %d", a, sum); //output파일에 출력
            fprintf(fout, "\n");

    }

    fclose(fin);
    fclose(fout);

    return 0;

}
