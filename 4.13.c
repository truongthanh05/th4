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
void xoa(int *a,int n){
	int k;
	getch();
	printf("\nnhap vi tri can xoa : ");
	scanf("%d",&k);
	k-=1;
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	printf("sau khi xoa \n");
	for(int i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	xoa(a,n);
	return 0;
	
}