#include <stdio.h>
#include <stdlib.h> //���� ������� ���ؼ��� ������� �ʿ�

int main(){

    FILE *fin, *fout; //���� �����
    fin=fopen("input2.txt","r"); //�б� ����
    fout=fopen("output2.txt","w");//���� ����

    int i,j,k,t, a,date, year, month, day;

    fscanf(fin,"%d", &t);
    for(a=1;a<=t;a++){
            fscanf(fin, "%d", &date);
            year = (date / 10000); //��
            month =((date % 10000) / 100); //year�� ���� �������� �ٽ� ����� �� ���ϱ�
            day =((date % 10000) % 100);

			switch(month){ //�� �޺��� ���� �������ֱ�, month��� ������ ���� ���̴� switch�� ����! if���� �ʹ� �����ϴ�.
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
