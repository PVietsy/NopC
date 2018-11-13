#include<stdio.h>

void input(int a[], int n){
	printf("Nhap mang:\n");
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void out(int a[], int n){
	printf("Mang vua nhap: ");
	for(int i = 0; i < n; i++) printf("%d\t", a[i]);
}

int search(int a[], int n, int x){
	int index = -1;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			index = i;
			break;
		}
	}
	return index;
}

int count(int a[], int n){
	int count = 0;
	for(int i = 0; i < n; i++) if(a[i] < -10) count++;
	return count;
}

float avg(int a[], int n){
	float s = 0, q = 0;
	for(int i = 0; i < n; i += 2){
		s += a[i]; 
		q++;
	}
	return s / q;
}

main(){
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int a[n], x;
	input(a, n);
	out(a, n);
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("Vi tri dau tien cua %d trong mang la: %d", x, search(a, n, x));
	printf("\nTrong mang co %d phan tu am < 10", count(a, n));
	printf("\nTrung binh cac phan tu o vi tri chan trong mang la: %.2f", avg(a, n));
	return 0;
}
