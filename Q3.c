#include <stdio.h>
#include <stdlib.h> //���� ����� ���� ���

int main(){
    FILE *fin, *fout;
    fin=fopen("input3.txt","r"); //�б�
    fout=fopen("output3.txt","w"); //����

    int i, a, t, ave, number[10], sum = 0;

    fscanf(fin, "%d", &t);

    for(a=1;a<=t;a++){
            sum =0;
            for(i=0;i<10;i++){
				fscanf(fin,"%d", &number[i]);
				if(( number[i] < 0 )||( number[i] > 1000)){ //���� �߸� �Է��Ͽ��� ��� no���
					fprintf(fout, "no");
						}
				sum += number[i]; 
			}
			ave = (sum/10); //��� ���ϱ�
            if(sum % 10 >=5){//�ݿø����ֱ� ���� �������� �Ǵ� 5�̻� �Ͻ� �÷��ֱ�
                ave += 1;
            }
			fprintf(fout, "#%d %d\n", a, ave);

	}

    fclose(fin);
    fclose(fout);

    return 0;
}
