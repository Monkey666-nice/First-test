#include<stdio.h>
#include<string.h>
#define N 5
struct books{//ͼ��ṹ 
	int bno;  //ͼ���� 
	char bname[20]; //����
	char field[10]; //רҵ����
	char author[10]; //����
	char publilsher[30]; //������
	float price; //�۸� 
};
int main(){
	struct books book[N]; //����ṹ���飬����N��ͼ�����Ϣ
	int i,j,k;
	char isc='n',isb='n';
	int bno,count[N]={0}; //����count��¼����ͼ��Ķ�������
	float total=0,pp;
	printf("������� ���� רҵ���� ���� ������ �۸�\n");
	/*����ͼ����Ϣ*/
	for(i=0;i<N;i++){
		printf("NO.%d:",i+1); //��ʾ�����i��ͼ�����Ϣ
		scanf("%d %s %s %s %s %f",&book[i].bno,book[i].bname,book[i].field,book[i].author,book[i].publilsher,&pp);
		book[i].price=pp; 
	} 
	printf("\n----------------------------------------------------\n");
	printf("ͼ�鶩����\n"); //����ͼ��
	do{
		printf("������ź�������"); //��ʾ����Ҫ����ͼ��ı�ź����� 
		scanf("%d %d",&bno,&k);
		isb='n';
		for(j=0;j<N;j++){
			if(bno==book[j].bno){
				count[j]+=k; //��¼ͼ��Ķ������� 
				isb='y';
			}
		}
		if(isb=='n'){
			printf("��Ŵ���\n");
		}
		printf("����������(y/n):");
		scanf(" %c",&isc);
	} while(isc=='y');
	printf("\n----------------------------------------------------\n");
	printf("�����嵥��\n"); //������鵥 
	printf("���\t����\t\t����\t����\t����\n");
	for(i=0;i<N;i++){
		if(count[i]!=0){
			printf("%d\t%s\t%s\t%.2f\t%d\n",book[i].bno,book[i].bname,book[i].author,book[i].price,count[i]);
			total+=count[i]*book[i].price;
		}
	}
	printf("\n----------------------------------------------------\n");
	printf("\t\t\t�ܼۣ�%.2f\n",total); //����ܼ۸� 
	return 0;
} 
