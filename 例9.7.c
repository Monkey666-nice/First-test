#include<stdio.h>
struct books{
	int bno;
	char bname[20],field[10],author[10],publisher[30];
	float price;
};
int main(){
	struct books book[5]={
		{
			101,"clanguage","computer","xw","rmydpress",39
		},
		{
			102,"vbprogramming","computer","zys","qhdxpress",39
		},
		{
			103,"java","computer","mj","jxgypress",34
		},
		{
			104,"linearalgebra","math","chc","dzgypress",29.8
		},
		{
			105,"clanguage","computer","thq","qhdxpress",26
		}
	};
	printf("%s\t%.2f\n",book[2].bname,book[2].price+10);
	printf("%s\t%.2f\n",(*(book+2)).bname,(*(book+2)).price+10);
	printf("%s\t%.2f\n",(book+2)->bname,(book+2)->price+10);
	return 0;
}
