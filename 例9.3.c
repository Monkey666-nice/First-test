#include<stdio.h>
int main(){
	struct books{ //结构类型 
		int bno;
		char bname[20],field[10],author[10],publisher[30];
		float price;
	};
	struct books bk1={
		1001,
		"c programming",
		"computer",
		"xuwei",
		"renminyoudian press",
		39.0
	};
	printf("bno=%d\nbname=%s\nfield=%s\n",bk1.bno,bk1.bname,bk1.field);
	printf("author=%s\n",bk1.author);
	printf("publisher=%s\nprice=%f\n",bk1.publisher,bk1.price);
	return 0;
}
