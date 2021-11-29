/*You decide to bet on the final match of the Tug of War National Championship.
Prior to the match the names and weights of the players are presented, 
alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). 
There is the same number of players on each side. You record the player weights as
they are presented and calculate a total weight for each time to inform your bet. 
You write a C program to assist with this.
Your program should first read an integer indicating the number of members per team.
Then, the program should read the player weights (integers representing kilograms)
alternating by team. 
After calculating the total weight of each team, the program should display the text"
Team X has an advantage" (replacing X with 1 or 2 depending on which team has a 
greater total weight).
You will then display the text "Total weight for team 1:" followed by the weight
of team 1, then "Total weight for team 2:" followed by the weight of team 2
(see example below).
You are guaranteed that the two teams will not have the same total weight.*/

#include<stdio.h>

int main(void)
{
    
    //variable decaration and defitition
    int members_per_team;
    int player_weights_team1; //in kg
    int player_weights_team2; //in kg
    int i ;
    int total_weight_team1 = 0;
    int total_weight_team2 = 0;
    int team1 = 1;
    int team2 = 2;

    //how many member for team
    printf("How many players for team?\n");
    scanf("%d", &members_per_team);

    for(i = 1; i <= members_per_team; i++) 
       {
           printf("Input the player weight for team 1\n");
           scanf("%d", &player_weights_team1 );
           printf("Input the player weight for team 2\n");
           scanf("%d", &player_weights_team2 );

           //calculate total weight for each team
           total_weight_team1 = total_weight_team1 + player_weights_team1;
           total_weight_team2 = total_weight_team2 + player_weights_team2;
       }
           
    if(total_weight_team1 > total_weight_team2 ) 
        {
              printf("Team %d has an advantage\n", team1);
        }
    else
       {
            if(total_weight_team1 < total_weight_team2)
                {
                   
                    printf("Team %d has an advantage\n", team2);
                   
                }
            else
                {
                    
                }
        }
       
    printf("Total weight for team 1: %d\n", total_weight_team1);// team weight
    printf("Total weight for team 2: %d\n", total_weight_team2);//team weight



    return 0;
}