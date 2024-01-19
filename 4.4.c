#include<stdio.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	
	for(int i=0;i<*n;i++){
		printf("%d ",a[i]);
	}
	
}
void dem(int *a,int *n){
	int x;
	int count=0;
	printf("nhap gia tri x can tim : ");
	scanf("%d",&x);
	for(int i=0;i<*n;i++){
	if(a[i]==x){
		count++;
	}
	}
	printf("so lan xuat hien %d : %d\n",x,count);
	
}

int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	dem(a,&n);
	return 0;
	
}