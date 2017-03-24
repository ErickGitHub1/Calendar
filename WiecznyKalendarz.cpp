#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	
	char znak; 
	int rok, mies, dz, spr;

	do
    {		
        printf("Wieczny kalendarz - podaje dzien tygodnia dla danej daty\n\n");
        
            fflush(stdin);
            
            
            // Range 966 - 2099
            do{
				printf("Podaj rok: ");
				spr = scanf("%d", &rok);
								
			}while(!(rok >= 966 && rok <= 2099));
            
            // Checking if year is leap or not
            if((rok%4 == 0 && (rok%100 > 0 || rok%100 <0)) || ((rok%400) == 0))
            {
					printf("Rok %d jest przestepny\n", rok);
			}else
			{
					printf("Rok %d nie jest przestepny\n", rok);
			}
           
        
        // Range for months 1 - 12
        do
        {
            printf("Podaj miesiac: ");
            spr = scanf("%d", &mies);
            fflush(stdin);
            
        }while(!((mies > 0) && (mies <=12)));
        
        
        
        // Range for days 1 - 31
        do{
			
			printf("Podaj dzien: ");
			scanf("%d", &dz);
			
		}while(!(dz > 0 && dz <= 31));
        

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

