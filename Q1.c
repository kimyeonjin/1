#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fin, *fout; //���� �����
    fin=fopen("input.txt","r"); //������ �б����·� �޾ƿ� ��
    fout=fopen("output.txt","w"); //������ ��
   // assert((fin!=NULL)&&(fout!=NULL));

    int a,t, number[10], sum=0;

    fscanf(fin,"%d", &t);
    for(a=1;a<=t;a++){
        for(int i=0;i<10;i++){
            fscanf(fin, "%d", &number[i]); //Ȧ���� �� ���� ���� ����
            if(number[i]%2==1){
                sum += number[i]; //sum �ʱ�ȭ ���ϸ� �����Ⱚ�� �����Ƿ� ó���� sum=0���� �ʱ�ȭ ���ֱ�
            }
        }
            fprintf(fout, "#%d %d", a, sum); //output���Ͽ� ���
            fprintf(fout, "\n");

    }

    fclose(fin);
    fclose(fout);

    return 0;

}
