#include<stdio.h>
#include<stdlib.h>
void translate_1(int);
void map(int);
int main(void){
	int num;
	printf("�п�J�A�n���Ʀr");
	scanf("%d",&num);
	translate_1(num);
}
void translate_1(int num){
		map(num/100);
		printf("��");
		map((num%100)/10);
		printf("�Q");
		map((num%100)%10);
}
void map(int number){
	switch(number){
		case 0:
			printf("�s");
			break;
		case 1:
			printf("�@");
			break;
		case 2:
			printf("�G");
			break;
		case 3:
			printf("�T");
			break;
		case 4:
			printf("�|");
			break;
		case 5:
			printf("��");
			break;
		case 6:
			printf("��");
			break;
		case 7:
			printf("�C");
			break;
		case 8:
			printf("�K");
			break;
		case 9:
			printf("�E");
			break;
	}
}
