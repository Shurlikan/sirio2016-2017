/* Esercizio 96 
   In un vettore sono contenuti i prezzi di vendita di un determinato prodotto
   relativamente agli N supermercati dove è presente. Il codice del supermercato
   corrisponde all'indice del vettore.
   Scrivi un programma che dopo aver caricato i dati permetta di:
		a. stampare il minimo prezzo registrato e il codice del supermercato in 
		cui si è rilevato;
		b. stampare la differenza di ciascun prezzo da uno specifico valore 
		fornito in input;
		c.dato il codice di un supermercato, ne stampi il prezzo o una 
		segnalazione se non è presente.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

main()
{
	float prices[N], min, offset;
	int i, choice, code = 0;
	
	
	
	for(i = 0; i < N; i++)
	{
		printf("Inserire il prezzo del %d supermercato: ", i + 1);
		scanf("%f", &prices[i]);
		// fflush(stdin);
	}
	
		
	printf("Quale programma vuoi eseguire?\n");
	printf("1. Stampare il minimo prezzo registrato e il codice del supermercato.\n");
	printf("2. Stampare la differenza di ciascun prezzo da uno specifico valore inserito in input.\n");
	printf("3. Dato il codice di un supermercato, ne stampi il prezzo o una segnalazione se non e' presente..\n");
	
	scanf("%d", &choice);
	
	while(choice < 1 && choice > 3)
	{
		printf("Scelta non valida. Inserire un altro valore.");	
		scanf("%d", &choice);
	}
	
	switch(choice)
	{
		case 1:
			min = prices[0];
			for(i = 0; i < N; i++)
			{
				if(min > prices[i])
				{
					min = prices[i];
					code = i;
				}						
			}			
			printf("Il minimo prezzo registrato e': %0.2f\n", min);
			printf("Il codice del supermercato e': %d\n", code);
			break;
		case 2:
			printf("Inserire l'offset: ");
			scanf("%0.2f", &offset);
			for(i = 0; i < N; i++)
			{
				printf("La differenza con l'offset e': %0.2f euro.\n", prices[i] - offset);	
			}
			break;
		case 3:
			printf("Inserire il codice del supermercato: ");
			scanf("%d", &code);
			
			while(code < 0 || code >= N)
			{
				printf("Codice inserito non valido.\n");
				printf("Inserire un altro codice: ");
				scanf("%d", &code);
			}
				printf("Il prezzo relativo al supermercato %d e' %0.2f\n", code, prices[code]);
			break;	
		default:
			break;					
	}
	system("pause");
}
