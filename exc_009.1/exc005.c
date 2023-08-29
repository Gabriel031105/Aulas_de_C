#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero, numeroAleatorio;
	char enter;
	
	srand(time(NULL));
	numeroAleatorio = rand() % 11;
	


printf(" @@@  @@@ @@@      @@@@@@@ @@@ @@@@@@@@@@   @@@@@@  @@@@@@@ @@@@@@@@      @@@@@@    @@@  @@@  @@@  @@@@@@@@ \n"  );
printf(" @@!  @@@ @@!        @@!   @@! @@! @@! @@! @@!  @@@   @@!   @@!          @@!  @@@   @@!  @@@  @@!       @@! \n"  );
printf(" @!@  !@! @!!        @!!   !!@ @!! !!@ @!@ @!@!@!@!   @!!   @!!!:!       @!@  !@!   @!@  !@!  !!@     @!!   \n"  );
printf(" !!:  !!! !!:        !!:   !!: !!:     !!: !!:  !!!   !!:   !!:          !!:!!:!:   !!:  !!!  !!:   !!:     \n"  );
printf("  :.:: :  : ::.: :    :    :    :      :    :   : :    :    : :: :::      : :. :::   :.:: :   :    :.::.: : \n"  );


printf(	"\n\n\n\n\n");




printf ("                   		          APERTE (ENTER) PARA INICIAR                           \n");
scanf ("%c", &enter);
                                                                                                    

	
	do{
        printf("Adivinhe o número entre 0 e 10: ");
        scanf("%i", &numero);
	}while (numero != numeroAleatorio);
	
	printf("\n\n                   d8888b.   .d8b.   d8888b.   .d8b.   d8888b.  d88888b  d8b   db  .d8888.   \n");
	printf("                   88  `8D  d8' `8b  88  `8D  d8' `8b  88  `8D  88'      888o  88  88'  YP   \n");
	printf("                   88oodD'  88ooo88  88oobY'  88ooo88  88oooY'  88ooooo  88V8o 88  `8bo.     \n");
	printf("                   88~~~    88~~~88  88`8b    88~~~88  88~~~b.  88~~~~~  88 V8o88    `Y8b.   \n");
	printf("                   88       88   88  88 `88.  88   88  88   8D  88.      88  V888  db   8D   \n");
	printf("                   88       YP   YP  88   YD  YP   YP  Y8888P'  Y88888P  VP   V8P  `8888Y'   \n\n");
	printf("  db    db   .d88b.    .o88b.  d88888b            .d8b.    .o88b.  d88888b  d8888b.  d888888b   .d88b.   db    db   \n");
	printf("  88    88  .8P  Y8.  d8P  Y8  88'               d8' `8b  d8P  Y8  88'      88  `8D  `~~88~~'  .8P  Y8.  88    88   \n");
	printf("  Y8    8P  88    88  8P       88ooooo           88ooo88  8P       88ooooo  88oobY'     88     88    88  88    88   \n");
	printf("  `8b  d8'  88    88  8b       88~~~~~           88~~~88  8b       88~~~~~  88`8b       88     88    88  88    88   \n");
	printf("   `8bd8'   `8b  d8'  Y8b  d8  88.               88   88  Y8b  d8  88.      88 `88.     88     `8b  d8'  88b  d88   \n");
	printf("     YP      `Y88P'    `Y88P'  Y88888P           YP   YP   `Y88P'  Y88888P  88   YD     YP      `Y88P'   ~Y8888P'   \n");
	printf("  \n");

	
	return 0;
}
