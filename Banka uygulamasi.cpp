#include <stdio.h>
#include <string.h>

int main (){
	
	// banka uygulamasi yapiyoruz Batuhan Samet Demirci.
	
	char isim[30]= "Batuhan";
	int parola =4040;
	int bakiye=500;
	int islem;
	char istenilenisim[30];
	int istenilenparola;
	int cekilenpara, yatirilanpara;
	
	printf ("Mobil Bankaciliga Hosgeldiniz.\nLutfen hesap adinizi giriniz:");
	scanf ("%s",&istenilenisim);
	
	printf ("\nLutfen hesap sifrenizi giriniz:");
	scanf ("%d",&istenilenparola);
	
	if (strcmp(isim,istenilenisim)==0 && parola==istenilenparola) { //strcmp ile eslesme testi yapiyoruz dogru ise 0
		
		printf ("\nKullanici bilgileri eslesmistir.Basariyla giris yaptiniz.");
		
		printf ("Lutfen yapmak istediginiz islemi seciniz.\n1-Para cekme\n2-Para Yatirma\n3-Bakiye ve hesap bilgisi sorgulama:\n");
		scanf("%d",&islem);
		
		if (islem==1){
			
			printf ("Para cekme islemini sectiniz. Lutfen cekmek istediginiz tutari giriniz:");
			scanf ("%d",&cekilenpara);
			
			if (bakiye>=cekilenpara){
			bakiye=bakiye-cekilenpara;
			printf ("Islem basariyla tamamlanmistir.\nCekilen miktar: %d\nYeni bakiye tutariniz:%d",cekilenpara,bakiye);
		}
		
		else {
		printf ("Bakiyeniz bu islem icin yeterli degildir.");
		}
				
	}
	
	
   if (islem==2) {
   	
   	printf ("Para yatirma islemini sectiniz. Lutfen yatirmak istediginiz tutari giriniz:");
			scanf ("%d",&yatirilanpara);
			
			if (bakiye>=yatirilanpara){
			bakiye=bakiye+yatirilanpara;
			printf ("Islem basariyla tamamlanmistir.\nYatirilan miktar: %d\nYeni bakiye tutariniz:%d",yatirilanpara,bakiye);
   	
   }

	
}

if (islem==3){
	
		printf ("\nBakiye ve hesap bilgisi sorgulamayi sectiniz.\nHesap Bilgileriniz: %s\nSifreniz: %d\nBakiyeniz:%d",isim,parola,bakiye);
	
}

else {	
	printf ("\nHatali bir giris yaptiniz. Tekrar deneyiniz.");
	}
	
}



}
	



