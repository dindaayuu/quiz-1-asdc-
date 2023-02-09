#include <stdio.h>
#include <stdlib.h>

// untuk panah
void panah(int posisiasli,int posisipanah){
	if(posisiasli == posisipanah){
		printf("==>");
	}else{
	}printf("   ");
}

main() {
	int posisi = 1;
	int kbhit = 0;
	int loop = 1;
	int a,b,d,c,e,f,g,h,k,l,m,n,x,y,s;
	int nilai,save,j,i;




	while(loop == 1 && kbhit != 13){
	system ("cls");
	printf("=======================\n");
	printf("\tMENU");
	printf("\n=======================\n");
	panah(1,posisi);printf("\t1. LEVEL 1\n");
	panah(2,posisi);printf("\t2. LEVEL 2\n");
	panah(3,posisi);printf("\t3. LEVEL 3\n");
	panah(4,posisi);printf("\t4. EXIT\n");
	printf("=======================\n");

// untuk posisi panah
	kbhit = getch();
	if(kbhit == 80){
		posisi++;
		if(posisi >3 ){
			posisi = 1;
		}
	}else if(kbhit == 72){
		posisi--;
			if(posisi >1 ){
			posisi = 3;}
	}else posisi = posisi;

	/*ini adalah program LEVEL 1*/
	if(posisi == 1 && kbhit == 13){
		system("cls");
	   printf("Masukan angka: ");
        scanf("%d", &nilai);
        for(i=0; i<=nilai; i++){
            save=i;
            for(j=0; j<=i; j++){
            printf("%d",save);
            save++;
            }printf("\n");
        }
        printf("\n");

    }while(s!=0);
    printf("==>");
	printf("FPB = :%d",a);
	}
	//ini adalah program LEVEL 2
	if(posisi == 2 && kbhit == 13){
            system("cls");
    printf("Masukkan angka : ");
        scanf("%d", &save);
        for(int i=1; i<=save; i++){
            for(int j=1; j<=i; j++){
            printf ("%d", i*j);
        }
            printf("\n");
	}
	printf("kpk dari %d dan %d adalah :%d\n ",a,b, x);//mau panggil y atau x sama saja
}
//ini adalah program LEVEL 3
	else (posisi == 3 && kbhit == 13);{
		system("cls");
		 printf("Masukan angka: ");
        scanf("%d",&a);
        b=a-1;
        d=b;
        e=b;
        for (c=1;c<=b;c++){

        for (h=b;h>=c;h--)
        printf("%s"," ");
        for (h=1;h<=c;h++)
        printf("%d",h);

        for (k=c-1;k>=1;k--)
        printf("%d",k);
        printf("\n");
}

        for(f=1;f<=a;f++)
        printf("%d",f);
        for(g=a-1;g>=1;g--)
        printf("%d",g);
        printf("\n");

        for (c=1;c<=b;c++){

        for (k=1;k<=c;k++)
        printf("%s"," ");
        for (l=1;l<=d;l++)
        printf("%d",l);d=d-1;

        for (m=e-1;m>=1;m--)
        printf("%d",m);e=e-1;
        printf("\n");
}
			}
	}
