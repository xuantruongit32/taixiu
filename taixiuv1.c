//Tai xiu v1

#include <unistd.h> // Thu vien cua ham sleep
#include<stdio.h>
#include <stdlib.h> // Thu vien cua ham random
#include <time.h> // Thu vien cua ham random
#include <string.h> //Thu vien cua ham ghep ki tu vao string
int GetRandom(int min,int max){  //Day la ham dung de random (copy tren mang)
    return min + (int)(rand()*(max-min+2.0)/(1.0+RAND_MAX));
}
int main ()
{
	int xx1,xx2,xx3,gold,enter,tien_cuoc,tong,tong1,tx; //Khai bao bien
	int i=1,i1=1,i2=1,i3=1;//Day la bien dung cho vong lap while
	char cau[100]="Cau: ",tai='T',xiu='X';
	printf("May tinh se do ra 3 con xuc xac \n");
	 sleep(1);
	printf("Nhiem vu cua ban la chon xiu (3-10),hoac tai (11-18) \n");
	 sleep(1);
	printf("Ban het vang ban thua, ban dung lai ban that bai\n");
	 sleep(1);
	 while (i2==1){  //Vong lap nay dung de lap lai khi da het tien

    while (i3==1){
printf("Nhap so vang ban muon nap: "); //Vong lap nay dung de lap lai khi so vang nap nho hon hoac bang 0
scanf("%d",&gold);
if (gold<=0){
	 sleep(3);
		printf("Ban dua toi a, moi ban thu lai \n");}
	else
    break;
	}


	 sleep(1);
	while (i==1){  //Vong lap nay dung de lap lai khi vua choi xong mot van


	while (i1==1){ //Vong lap nay dung de lap lai khi tien cuoc lon hon tien nap hoac tien cuoc nho hon 0
		 	printf("Ban muon dat cuoc bao nhieu vang : ");
	scanf("%d",&tien_cuoc);
	if (tien_cuoc>gold)
		printf("Tien cuoc lon hon tien nap vui long thu lai \n");

	else if (tien_cuoc<0){
	 sleep(3);
		printf("Ban dua toi a, moi ban thu lai \n");}
	else
    break;

	}
    srand((unsigned int)time(NULL));
	int min=1;
	int max=6;
	xx1 =  GetRandom(1,6);
	xx2 =  GetRandom(1,6);
	xx3 =  GetRandom(1,6);
	tong = xx1+xx2+xx3;
	tong1 = xx1+xx2;
	if (xx1+xx2+xx3>10)
		strncat(cau, &tai, 1);
	else  strncat(cau, &xiu, 1);

	do {

	printf("Vui long chon xiu (1), hoac tai (2) : ");
	scanf("%d",&tx);
	if (tx!=1 && tx!=2){
		printf("Vui long thu lai \n");
		sleep(1);
	}
	} while (tx !=1 && tx!=2 );
	 sleep(2);
	printf("xx1: %d \n",xx1);
	 sleep(2);
	printf("xx2: %d \n",xx2);
	 sleep(2);	if (tong1 <= 4){ //Truong hop khi ra xiu non (xx1+xx2<=4)
		if (tx == 1){
			gold = gold + tien_cuoc;
			printf("Ra xiu non %d, ban thang \n",tong1);
	        sleep(1);
			printf("So vang cua ban: %d  \n",gold);
		}

	    else {
		gold=gold - tien_cuoc;
		printf("Ra xiu non %d, ban thua \n",tong1);
	        sleep(1);
		printf("So vang cua ban: %d  \n",gold);
	}

}
    else if(tong1>=10) {  //Truong hop ra tai non (xx1+xx2>=10)
	if (tx == 2){
			gold = gold + tien_cuoc;
			printf("Ra tai non %d, ban thang \n",tong1);
	        sleep(1);
			printf("So vang cua ban: %d  \n",gold);
		}

	else {
		gold=gold - tien_cuoc;
		printf("Ra tai non %d, ban thua \n",tong1);
	        sleep(1);
		printf("So vang cua ban: %d  \n",gold);
	}
}
	else
	{
	printf("xx3: %d \n",xx3); //Truong hop ra tai xiu binh thuong
	if (tong <= 10){
		if (tx == 1){
			gold = gold + tien_cuoc;
			printf("Ra xiu %d, ban thang \n",tong);
	        sleep(1);
			printf("So vang cua ban: %d  \n",gold);
		}

	    else {
		gold=gold - tien_cuoc;
		printf("Ra xiu %d, ban thua \n",tong);
	        sleep(1);
		printf("So vang cua ban: %d  \n",gold);
	}

}
    else {
	if (tx == 2){
			gold = gold + tien_cuoc;
			printf("Ra tai %d, ban thang \n",tong);
	        sleep(1);
			printf("So vang cua ban: %d  \n",gold);
		}

	else {
		gold=gold - tien_cuoc;
		printf("Ra tai %d, ban thua \n",tong);
	        sleep(1);
		printf("So vang cua ban: %d  \n",gold);
	}

	}
	}
if (gold==0)//Thoat khoi vong lap khi so vang bang 0
{
	printf("%s \n",cau);
	break;
}


else if (gold > 0) { //Ket thuc mot vong choi
printf("%s \n",cau);
	printf("Tiep tuc an 1, thoat an so bat ki : ");
scanf("%d",&i);
}}
if (i!=1){ //Khi nguoi choi thoat game

	printf("Dung lai la that bai!!!!");
	break;
}

	 sleep(1);  //Sau khi thoat khoi vong lap i de vao vong lap i2
	printf("Ban da het tien \n");
	 sleep(1);
	printf("Dung lai la that bai!!!! \n");
	 sleep(1);
    printf("Tiep tuc an 1, thoat an so bat ki : ");
	scanf("%d",&i2);
	if (i2!=1){
		printf("Dung lai la that bai!!!! \n");
		break;
	}


}
}

