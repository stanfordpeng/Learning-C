// Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games. 
// The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.

// Hint: Use a two-dimensional array and nested for loops. 
// The outer-most for loop will iterate on a per game basis gathering scores for the inner-most for loop interating through players. 
// Use this same model to create arrays to store total scores and to calculate averages.

// Extra Credit: There is none. This one is pretty hard!

#include <stdio.h>

int main(){
    // int scores[5][4]; // 5 players, 4 games
    int total_scores[5] = {0}; // Total scores for each player
    float averages[5] = {0.0}; // Average scores for each player

    // Input scores
    for (int game = 0; game < 4; game++) {
        printf("Enter scores for Game %d:\n", game + 1);
        for (int player = 0; player < 5; player++) {
            printf("Player %d: ", player + 1);
            int tmp = 0;
            scanf("%d", &tmp);
            total_scores[player] += tmp;
        }
    }

    // Calculate averages
    for (int player = 0; player < 5; player++) {
        averages[player] = (float)total_scores[player] / 4;
    }

    // Find the player with the highest average
    int highest_player = 0;
    for (int i = 1; i < 5; i++) {
        if (averages[i] > averages[highest_player]) {
            highest_player = i;
        }
    }

    printf("Player %d had the highest scoring average: %.2f\n", highest_player + 1, averages[highest_player]);

    return 0;
}
