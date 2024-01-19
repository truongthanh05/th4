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
float tbchan(int *a,int *n){
	int tong=0;
	int count=0;
	for(int i=0;i<*n;i++){
	if(a[i]%2==0){
		tong+=a[i];
		count++;
		}
	}
return (float)tong/count; 	
}
float tble(int *a,int *n){
	int tong=0;
	int count=0;
	for(int i=0;i<*n;i++){
	if(a[i]%2!=0){
		tong+=a[i];
		count++;
		}
	}
return (float)tong/count; 	
}
int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	printf("\ntb cac so chan : %2.f\n",tbchan(a,&n));
	printf("tb cac so le : %.2f",tble(a,&n));
	return 0;
	
}