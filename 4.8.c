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

bool tn(int *a,int n){
int l=0;
int r=n-1;
while(l<r){
	if(a[l]==a[r]){
		return true;
	}
	l++;
	r--;
}
return false;	
}
int main(){
	int n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	if(tn(a,n)){
		printf("\nla so thuan nghich");
	}
	else{
			printf("\nkhong la so thuan nghich");
	}
	
	
}