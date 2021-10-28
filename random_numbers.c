#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int FROM, TO;
    printf("From: ");
    scanf("%d", &FROM);
    printf("To: ");
    scanf("%d", &TO);
    int random_number;

    srand(time(0));
    random_number = (rand() % (TO - FROM + 1)) + FROM;
    
    printf("The random number is: %i\n", random_number);

}
