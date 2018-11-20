#include<conio.h>
#include<stdio.h>
#include<string.h>
void Init(int B[10],int n){
	printf ("nhap mang: \n");
	for (int i=0;i<n;i++){
	printf ("B[%d]= ",i);	
	scanf ("%d",&B[i]);	
	}
}
void Display(int B[10],int n){
	for (int i=0;i<n;i++)
	printf ("%d\t",B[i]);
	
}
float Average(int B[10],int n){
	float S=0;
	for (int i=0;i<n;i++)
	S+=B[i];
	return S/10;
}
void Dec(int B[10],int n){
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(B[i]<B[j]){
				int tam=B[i];
				B[i]=B[j];
				B[j]=tam;
			}
		}
	}
}
main(){
	int n=10;
	int B[n];
	Init(B, n);
	printf("Mang vua nhap: ");
	Display(B, n);
	printf("\nTrung binh cong gia tri cac phan tu trong mang la: %.2f", Average(B, n));
	Dec(B, n);
	printf("\nMang sau khi sap xep tang dan: ");
	Display(B, n);
	return 0;
}
