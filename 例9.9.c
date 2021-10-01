#include<stdio.h>
int main(){
	struct books{
		int bno;
		char bname[20],field[10],author[10],publisher[30];
		float price;
	};
	struct books bk1={
		1001,"c programming","computer","xuwei","renminyoudian press",39.0
	};
	struct books *p=&bk1;
	printf("bno=%d,bname=%s,price=%f\n",bk1.bno,(*p).bname,p->price);
	return 0;
}
