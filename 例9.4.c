#include<stdio.h>
struct books{
	int bno;
	char bname[20],field[10],author[10],publisher[30];
	float price;
};
int main(){
	struct books book1={
		101,"VB programming","computer","zys","zhongguodianli press",29.8 
	};
	struct books book2={
		102,"C programming","computer","xuwei","renminyoudian press",39.0
	};
	book2=book1;
	printf("book2.bno=%d,book2.name=%s\n",book2.bno,book2.bname);
	/*
	if(book1==book2){
		printf("book1=book2");
	}else{
		printf("book1!=book2");
	}
	*/
	return 0;
}
