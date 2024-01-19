#include<stdio.h>
#include<stdbool.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);}
   for(int i=0;i<*n;i++){
		printf("%3d",*(a+i));
		}
	}

void dem(int *a,int n){
	int count=0;
	for(int i=0;i<n;i++){
		count=0;
		for(int k=0;k<n;k++){
			if(a[i]==a[k]){
			count++;}}
	bool kt=false;
	for(int j=i-1;j>=0;j--){
    if(a[i]==a[j]){
	kt=true;
	break;}}
	if(!kt){
	printf("\n%d xuat hien %d lan \n",a[i],count);
	
			}
		}
		
	}

int main(){
	int n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	dem(a,n);
	
	
}