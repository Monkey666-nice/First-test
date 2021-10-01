#include<stdio.h>
struct ss{
	int a;
	int b;
};
void fun(struct ss m[],int n){
	int i,j,k;
	struct ss temp;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if((m[j].a<m[k].a)||(m[j].a==m[k].a&&m[j].b<m[k].b)){
				k=j;
			}
		}
		if(k!=i){
			temp=m[i];
			m[i]=m[k];
			m[k]=temp;
		}
	}
}
int main(){
	struct ss x[]={
		{
			5,3
		},
		{
			3,2
		},
		{
			3,6
		},
		{
			2,4
		},
		{
			5,8
		}
	};
	int i,k=5;
	fun(x,k);
	for(i=0;i<k;i++){
		printf("%d,%d\n",x[i].a,x[i].b);
	}
	return 0;
}
