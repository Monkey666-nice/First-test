#include<stdio.h>
struct fact{
	int x;
	int y;
};
struct fact f1(struct fact t1,struct fact t2){
	struct fact t3;
	t3.x=t1.x*t2.x+t1.y;
	t3.y=t3.x+t2.y;
	return t3;
}
struct fact f2(struct fact t){
	int temp;
	temp=t.x;
	t.x=t.y;
	t.y=temp;
	return t;
}
int main(){
	struct fact s,s1={5,6},s2={3,5};
	s=f1(s1,s2);
	printf("%d,%d\n",s.x,s.y);
	f2(s);
	printf("%d,%d",s.x,s.y);
	return 0;
}
