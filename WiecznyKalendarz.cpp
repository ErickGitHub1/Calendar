#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	
	char znak; 
	int rok, mies, dz, spr;
	int flaga_przestepnosci = 0;

	do
    {		
        printf("\nWieczny kalendarz - podaje dzien tygodnia dla danej daty\n\n");
        
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
					flaga_przestepnosci = 1; 
			}else
			{
					printf("Rok %d nie jest przestepny\n", rok);
					flaga_przestepnosci = 0;
			}
           
        
        // Range for months 1 - 12
        do
        {
            printf("Podaj miesiac: ");
            spr = scanf("%d", &mies);
            
            switch(mies)
            {
			case 1:
				printf("Wybrany miesiac: Styczen\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 2:
				printf("Wybrany miesiac: Luty\n");
				
				if(flaga_przestepnosci == 1)
				{
						do{			
							printf("Podaj dzien: ");
							scanf("%d", &dz);			
						}while(!(dz > 0 && dz <= 29));
						
				}else
				
				{
						do{			
							printf("Podaj dzien: ");
							scanf("%d", &dz);			
						}while(!(dz > 0 && dz <= 28));
				}
				
			    break;
			case 3:
				printf("Wybrany miesiac: Marzec\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 4:
				printf("Wybrany miesiac: Kwiecien\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 30));
				
				break;
			case 5:
				printf("Wybrany miesiac: Maj\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 6:
				printf("Wybrany miesiac: Czerwiec\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 30));
				
				break;
			case 7:
				printf("Wybrany miesiac: Lipiec\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 8:
				printf("Wybrany miesiac: Sierpien\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 9:
				printf("Wybrany miesiac: Wrzesien\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 30));
				
				break;
			case 10:
				printf("Wybrany miesiac: Pazdziernik\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;
			case 11:
				printf("Wybrany miesiac: Listopad\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 30));
				
				break;
			case 12:
				printf("Wybrany miesiac: Grudzien\n");
				
				do{			
					printf("Podaj dzien: ");
					scanf("%d", &dz);
			
				}while(!(dz > 0 && dz <= 31));
				
				break;										
			default:
				printf("Nie ma takiego miesiaca\n");
				break;	
			}
			
            fflush(stdin);
            
        }while(!((mies > 0) && (mies <=12)));
        
       

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
                printf(" (Niedziela)");
                break;
            case 6:
                printf(" (Sobota)");
                break;
            case 5:
                printf(" (Piatek)");
                break;
            case 4:
                printf(" (Czwartek)");
                break;
            case 3:
                printf(" (Sroda)");
                break;
            case 2:
                printf(" (Wtorek)");
                break;
            case 1:
                printf(" (Poniedzialek)");
                break;
        }
        
		printf("\nPowtorzyc t/n? : ");
		//fflush(stdin);
	    scanf("%s", &znak);
		
	}while(znak == 't');


	return 0;
}

