#include<stdio.h>
#include<stdlib.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<*n;i++){
		printf("%d ",a[i]);
	}
	
}
int tongpt(int *a,int *n,int *x,int *y){
	int tong=0;
	for(int i=*x;i<=*y;i++){
		tong+=a[i];
		}
	
return tong; 	
}
void nhapxy(int *x,int *y){
	printf("nhap x < y : ");
	scanf("%d%d",x,y);
	while(*x>*y){
		printf("nhap x < y : ");
	scanf("%d%d",x,y);
	}
}

	
int main(){
	int n;
	int x,y;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	nhapxy(&x,&y);
	printf("\ntong cac phan tu doan[%d,%d] : %5d\n",x,y,tongpt(a,&n,&x,&y));
	return 0;
	
}