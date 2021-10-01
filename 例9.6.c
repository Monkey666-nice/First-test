#include<stdio.h>
struct pos{
	int x,y;
};
int getvalue(struct pos a,struct pos b,struct pos c,struct pos d){
	struct pos s,t;
	int flag;
	s.x=a.x-b.x;
	s.y=a.y-b.y;
	t.x=c.x-d.x;
	t.y=c.y-d.y;
	flag=s.x*t.x+s.y*t.y;
	printf("flag=%d\n",flag);
	return flag>0;
}
int main(){
	struct pos p1={3,2},p2={1,2},p3={0,1},p4={2,0};
	printf("%d\n",getvalue(p1,p2,p3,p4));
	return 0;
}
