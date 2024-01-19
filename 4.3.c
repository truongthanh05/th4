#include<stdio.h>
void nhap(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("truoc khi thay doi\n");
	
	for(int i=0;i<*n;i++){
		printf("%d ",a[i]);
	}
	printf("sau  khi thay doi\n");
}
void tang(int *a,int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(*(a+j)>*(a+i)){
				tg=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=tg;
			}
			
		}
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		}

}
void giam(int *a,int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(*(a+j)<*(a+i)){
				tg=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=tg;
			}
			
		}
		
	}
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
		}

}
int main(){
	int n;
	printf("nhap so luong phan tu");
	scanf("%d",&n);
	int a[n];
	nhap(a,&n);
	tang(a,n);
	printf("\n");
	giam(a,n);
	return 0;
	
}