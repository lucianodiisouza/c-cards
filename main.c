//
// Created by Luciano dii Souza on 12/06/24.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    int val = 0;

    puts("Enter the card name");
    scanf("%2s", card_name);

    // verify the card_name[0] value to fill the val variable
    switch (card_name[0]) {
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

    // check the values to count the cards
    if((val > 2) && (val < 7)) {
        puts("Count has gone up!");
    } else {
        puts("Count has gone down!");
    }

    return 0;
}