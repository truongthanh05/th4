#include<stdio.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int max2(int a[],int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(a[j]>a[i]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
			
		}
		
	}
	int max=a[n-2];
	return max;
}
int min2(int a[],int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(a[j]<a[i]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
			
		}
		
	}
	
 int min=a[n-2];
	return min;
}
int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	printf("max lon thu 2 = %d\n",max2(a,n));
printf("min nho thu 2 = %d",min2(a,n));
//min2(a,n);
	return 0;
	
}