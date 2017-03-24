#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	
	char znak; 
	int rok, mies, dz, spr;

	do
    {		
        printf("Wieczny kalendarz - podaje dzien tygodnia dla danej daty\n\n");
        do
        {
            fflush(stdin);
            
            
            // Range 966 - 2099
            do{
				printf("Podaj rok: ");
				spr = scanf("%d", &rok);
								
			}while(!(rok >= 966 && rok <= 2099));
            
           
            printf("Wartosc zwrocona przez scanf(): %d\n", spr);
        }while(!spr);
        do
        {
            printf("Podaj miesiac: ");
            spr = scanf("%d", &mies);
            fflush(stdin);
            printf("wartosc zwrocona przez scanf(): %d\n", spr);
        }while(!((mies > 0) && (mies <=12)));
        printf("Podaj dzien: ");
        scanf("%d", &dz);

        printf("\nWybrana data: %d-%02d-%02d", rok, mies, dz);

        if(mies<3)
        {
            rok--;
            mies += 12;
        }

        dz=rok+rok/4-rok/100+rok/400+3*mies-((mies*2+1)/5)+dz+1;
        spr = (dz/7)*7;
        dz=dz-spr;


        switch (dz)
        {
            case 0:
                printf(" Niedziela");
                break;
            case 6:
                printf(" Sobota");
                break;
            case 5:
                printf(" Piatek");
                break;
            case 4:
                printf(" Czwartek");
                break;
            case 3:
                printf(" Sroda");
                break;
            case 2:
                printf(" Wtorek");
                break;
            case 1:
                printf(" Poniedzialek");
                break;
        }
        printf(" zmienna spr=%d\n",spr);
        printf("\n\n");
		printf("Powtorzyc t/n? : ");
		//fflush(stdin);
	    scanf("%s", &znak);
		
	}while(znak == 't');


	return 0;
}

