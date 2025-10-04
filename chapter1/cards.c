
#include <stdio.h>
#include <stdlib.h>

int getValUsingIf(char card_name[3]);
int getValUsingSwitch(char card_name[3]);

int main(){

    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X')
    {
        puts("Enter the card_name:");
        scanf("%2s", card_name);
        
        int val = 0;
        
        switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;

            case 'A':
                val = 11;
                break;
    
            default:
                val = atoi(card_name);
                if ((val < 1) || (val > 10))
                {
                    puts("I don't understand that value");
                    continue;
                }

        }

        if ((val > 2) && (val < 7))
        {
            count++;
        }else if (val == 10)
        {
            count--;
        }

        printf("Current count: %i\n", count);

    }
    
  
    return 0;
}

int getValUsingIf(char card_name[3]){

    int val = 0;
    if (card_name[0] == 'K')
    {
        val = 10;
    }else if (card_name[0] == 'Q')
    {
        val = 10;
    }else if (card_name[0] == 'J')
    {
        val = 10;
    }else if (card_name[0] == 'A')
    {
        val = 11;
    }else
    {
        val = atoi(card_name);
    }

    return val;
}

int getValUsingSwitch(char card_name[3]){

    int val = 0;

    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;

    case 'A':
        val = 11;
        break;
    
    default:
        val = atoi(card_name);
        break;
    }

    return val;
}