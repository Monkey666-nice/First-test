#include<stdio.h>
int main(){
	struct books{
		int bno;
		char bname[20],field[10],author[10],publisher[30];
		float price;
	};
	struct books bk1;
	printf("%d\n",sizeof(bk1));
	return 0;
}
