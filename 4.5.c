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
void gan1(int *a,int *n){
	int x;
	float hieu;
	int m=0;
	printf("nhap gia tri x de tim gia tri gan nhat : ");
	scanf("%d",&x);
	hieu=abs(a[m]-x);
	for(int i=1;i<*n;i++){
	if((float)abs(a[i]-x)<hieu){
		hieu=(float)abs(a[i]-x);
		m=i;
		}
	}
	printf("gia tri gan %d nhat : %d",x,a[m]);
	
	
	
	
}


int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	gan1(a,&n);
	return 0;
	
}