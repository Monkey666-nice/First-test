#include<stdio.h>
struct st{
	int m,*n;
}*p;
int a[5]={10,20,30,40,50};
struct st s[5]={
	100,&a[0],200,&a[1],300,&a[2],400,&a[3],500,&a[4]
};
int main(){
	p=s;
	printf("%d",p->m++);
	printf("\t%d\n",p->m);
	printf("%d",*p->n);
	printf("\t%d",*++p->n);
	return 0;
}
