#include<stdio.h>
#include<stdbool.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<*n;i++){
		printf("%d ",a[i]);}
	
}
void ht(int *a,int n){
	printf("\nin ra so chi xuat hien 1 lan\n");
	for(int i=0;i<n;i++){
		bool kt=false;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				kt=true;
				break;
			}
		}
		for(int k=i-1;k>=0;k--){
			if(kt)
			{
				break;
			}
			if(a[i]==a[k]){
				kt=true;
				break;
			}
		}
		if(!kt){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int n;
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	ht(a,n);
	return 0;
	
}