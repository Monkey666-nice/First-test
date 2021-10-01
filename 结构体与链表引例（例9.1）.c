#include<stdio.h>
#include<string.h>
#define N 5
struct books{//图书结构 
	int bno;  //图书编号 
	char bname[20]; //书名
	char field[10]; //专业领域
	char author[10]; //作者
	char publilsher[30]; //出版社
	float price; //价格 
};
int main(){
	struct books book[N]; //定义结构数组，保存N本图书的信息
	int i,j,k;
	char isc='n',isb='n';
	int bno,count[N]={0}; //数组count记录各种图书的订购数量
	float total=0,pp;
	printf("输入书号 书名 专业领域 作者 出版社 价格：\n");
	/*输入图书信息*/
	for(i=0;i<N;i++){
		printf("NO.%d:",i+1); //提示输出第i个图书的信息
		scanf("%d %s %s %s %s %f",&book[i].bno,book[i].bname,book[i].field,book[i].author,book[i].publilsher,&pp);
		book[i].price=pp; 
	} 
	printf("\n----------------------------------------------------\n");
	printf("图书订单：\n"); //购买图书
	do{
		printf("输入书号和数量："); //提示输入要购买图书的编号和数量 
		scanf("%d %d",&bno,&k);
		isb='n';
		for(j=0;j<N;j++){
			if(bno==book[j].bno){
				count[j]+=k; //记录图书的订购数量 
				isb='y';
			}
		}
		if(isb=='n'){
			printf("书号错误\n");
		}
		printf("继续购买吗？(y/n):");
		scanf(" %c",&isc);
	} while(isc=='y');
	printf("\n----------------------------------------------------\n");
	printf("购书清单：\n"); //输出购书单 
	printf("书号\t书名\t\t作者\t单价\t数量\n");
	for(i=0;i<N;i++){
		if(count[i]!=0){
			printf("%d\t%s\t%s\t%.2f\t%d\n",book[i].bno,book[i].bname,book[i].author,book[i].price,count[i]);
			total+=count[i]*book[i].price;
		}
	}
	printf("\n----------------------------------------------------\n");
	printf("\t\t\t总价：%.2f\n",total); //输出总价格 
	return 0;
} 
