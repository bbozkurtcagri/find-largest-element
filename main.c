#include <stdio.h>
int main() {
	int elemansayisi;
	printf("Eleman sayisini giriniz : ");
	scanf("%d",&elemansayisi);
	printf("\n");
	int dizi[elemansayisi],i,j;
	
	for(i=0; i<elemansayisi; i++){
		printf("Dizinin  elemanlanrini giriniz : ");
		scanf("%d",&dizi[i]);
	}
	printf("\n");
	for(i=0;i<elemansayisi;i++){
	
	printf("dizinin %d. elemani: %d\n",i,dizi[i]);
	printf("\n");
	
	}
	int enBuyuk=dizi[0];
	for(j=0; j<elemansayisi; j++){
	
	if(enBuyuk <= dizi[j])
		
		enBuyuk=dizi[j];
			
	}
	
	printf("En buyuk deger : %d",enBuyuk);
	return 0;
}
