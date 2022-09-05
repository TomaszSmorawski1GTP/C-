#include<stdio.h>
#include<iostream>
#include<math.h>
int main(){
	int wybor,b,c,f;
	float a;
	
	
	printf("MENU\n");
	printf("1.Zaokraglij\n");
	printf("2.system 16\n");
	printf("3.zera\n");
	printf("4.Koniec\n");
	printf("Wybierz: ");
    std::cin>>wybor;
	printf("Podaj liczbe: \n");
	
		if(wybor==1){
		std::cin>>a;
	}
		if(wybor==2){
		std::cin>>b;
	}
		if(wybor==3){
		std::cin>>c;
	}
	
	switch(wybor){
		case 1:{
			printf("%.2lf",a);
			scanf("%f", &f);
			break;
		}
	
		case 2:{
			printf("%x",b%16);
			break;
		}

		case 3:{
			printf("%06d",c);
			break;
		}
	
		case 4:{
			system("pause");
			break;
		}
	}

	
return 0;
	


}
