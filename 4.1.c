#include<stdio.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int max(int a[],int n){
	int maxx=a[0];
	for(int i=0;i<n;i++){
		if(maxx<a[i]){
			maxx=a[i];
		}
	}
	return maxx;
}
int min(int a[],int n){
	int minn=a[0];
	for(int i=0;i<n;i++){
		if(minn>a[i]){
			minn=a[i];
		}
	}
	return minn;
}
int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	printf("max = %d",max(a,n));
	printf("min = %d",min(a,n));
	return 0;
	
}