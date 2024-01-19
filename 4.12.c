#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void nhap(int *a,int *n){
	srand(time(NULL));
	int dem=0;
	while(dem<*n){
	a[dem]=1+rand()%100;
	int xh=0;
	for(int i=dem-1;i>=0;i--){
		if(a[dem]==a[i]){
		xh=1;
		break;}	
	}
	if(!xh){
		dem++;
	}
}
printf("tao so ngau nhien khong trung nhau\n");
	 for(int i=0;i<*n;i++){
		printf("%d ",*(a+i));
		}
	
}
void chen(int *a,int n){
	int x,k;
	getch();
	printf("\nnhap vi tri can chen : ");
	scanf("%d",&k);
	printf("\nnhap gia tri can chen : ");
	scanf("%d",&x);
	n+=1;
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	printf("sau khi chen \n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	chen(a,n);
	return 0;
	
}