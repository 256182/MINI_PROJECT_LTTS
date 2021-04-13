#include<stdio.h>
#include<stdlib.h>
#include"snooker.h"


/**
 * @brief 
 * 
 * @param number_of_seconds 
 */
  

/**
 * @brief 
 * 
 * @return int 
 */
int main(){
    printf("\t\t\t\t\t****HELLO EVERYONE***\n");
    
    printf("\t\t\t***WELCOME TO THE FINALS OF THE WORLD SNOOKER TOURNAMENT***\n\n");
    
    players_t nplay={0,1};
    int player_count=0;
    int red_ball_count=0;
    char player1_name[100];
    char player2_name[100];
    printf("Enter the Name of 1st Player(in caps) : ");
    scanf("%s",&player1_name);
    printf("Enter the Name of 2nd Player(in caps) : ");
    scanf("%s",&player2_name);
    
    printf("\t\t\t***PLEASE GIVE A HUGE ROUND OF APPLAUSE FOR THE FINALISTS\n\n");
    
    printf("\t\t\t\t1.%s\n\t\t\t2.%s\n\n",player1_name,player2_name);
    
    printf("\t\t\t\t***SILENCE PLEASE\n\n");
    printf("\t\t\t\t%s PLEASE BREAK\n\n",player1_name);
    int player1_score=0;
    int player2_score=0;
    while(red_ball_count<5){
        printf("\n\n\t\t\t***CURRENT SCORES ARE");
        printf("\n\n\t\t%s:%d\t%s:%d",player1_name,player1_score,player2_name,player2_score);
        if(player_count==0){
            printf("\n\n\t\t\t%s CAN NOW PLAY!!\n\n",player1_name);
            int choice_1;
            printf("\t\t\tChoose any one of the options below\n\n");
            
            printf("\t\t\t1.%s POT THE RED BALL\n",player1_name);
            
            printf("\t\t\t2.%s JUST HIT THE RED BALL AND PLAYED SAFE\n",player1_name);
            printf("\t\t\t3.%s HIT ONE OF THE COLOUR BALLS OTHER THAN RED OR POTTED A COLOUR BALL\n",player1_name);
            
            printf("\t\t\t4.%s DID NOT HIT ANY BALL OR HIT THE WHITE BALL IN ANY POCKET\n",player1_name);
            printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4): ");
            scanf("%d",&choice_1);
            switch (choice_1)
            {
            case 1:
                player1_score+=1;
                red_ball_count+=1;
                printf("\n\n\t\t\tNOW HIT A COLOUR BALL OTHER THAN RED");
                int choice_2;
                
                printf("\n\n\t\t\tChoose any one of the options below\n\n");
                
                printf("\t\t\t1.%s POT THE YELLOW BALL\n",player1_name);
                printf("\t\t\t2.%s POT THE GREEN BALL\n",player1_name);
                printf("\t\t\t3.%s POT THE BROWN BALL\n",player1_name);
                printf("\t\t\t4.%s POT THE BLUE BALL\n",player1_name);
                printf("\t\t\t5.%s POT THE PINK BALL\n",player1_name);
                printf("\t\t\t6.%s POT THE BLACK BALL\n",player1_name);
                printf("\t\t\t7.%s DID A FOUL\n",player1_name);
                printf("\t\t\t8.%s DID NOT POT COLOUR BALL\n",player1_name);
                printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6/7/8): ");
                scanf("%d",&choice_2);
                switch (choice_2)
                {
                case 1:
                    player1_score+=yellow(&nplay);
                    break;
                case 2:
                    player1_score+=green(&nplay);
                    break;
                case 3:
                    player1_score+=brown(&nplay);
                    break;
                case 4:
                    player1_score+=blue(&nplay);
                    break;
                case 5:
                    player1_score+=pink(&nplay);
                    break;
                case 6:
                    player1_score+=black(&nplay);
                    break;
                case 7:;
                    int choice_3;
                    
                    printf("\n\n\t\t\tChoose any one of the options below\n\n");
                    
                    printf("\t\t\t1.%s FOUL POT THE YELLOW BALL\n",player1_name);
                    printf("\t\t\t2.%s FOUL POT THE GREEN BALL\n",player1_name);
                    printf("\t\t\t3.%s FOUL POT THE BROWN BALL\n",player1_name);
                    printf("\t\t\t4.%s FOUL POT THE BLUE BALL\n",player1_name);
                    printf("\t\t\t5.%s FOUL POT THE PINK BALL\n",player1_name);
                    printf("\t\t\t6.%s FOUL POT THE BLACK BALL\n",player1_name);
                    printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6): ");
                    scanf("%d",&choice_3);
                    switch (choice_3)
                    {
                        case 1:
                            player1_score-=yellow(&nplay);
                            player_count=1;
                            break;
                        case 2:
                            player1_score-=green(&nplay);
                            player_count=1;
                            break;
                        case 3:
                            player1_score-=brown(&nplay);
                            player_count=1;
                            break;
                        case 4:
                            player1_score-=blue(&nplay);
                            player_count=1;
                            break;
                        case 5:
                            player1_score-=pink(&nplay);
                            player_count=1;
                            break;
                        case 6:
                            player1_score-=black(&nplay);
                            player_count=1;
                            break;
                        default:
                            player1_score-=brown(&nplay);
                            player_count=1;
                            break;
                    }
                    break;
                case 8:
                    player_count=1;
                    break;
                default:
                    player_count=1;
                    break;
                }
                break;
            case 2:
                player_count=1;
                break;
            case 3:;
                int choice_4;
                player_count=1;
                
                printf("\n\n\t\t\tChoose any one of the options below\n\n");
                
                printf("\t\t\t1.%s FOUL POT THE YELLOW BALL\n",player1_name);
                printf("\t\t\t2.%s FOUL POT THE GREEN BALL\n",player1_name);
                printf("\t\t\t3.%s FOUL POT THE BROWN BALL\n",player1_name);
                printf("\t\t\t4.%s FOUL POT THE BLUE BALL\n",player1_name);
                printf("\t\t\t5.%s FOUL POT THE PINK BALL\n",player1_name);
                printf("\t\t\t6.%s FOUL POT THE BLACK BALL\n",player1_name);
                printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6): ");
                scanf("%d",&choice_4);
                switch (choice_4)
                {
                    case 1:
                        player1_score-=yellow(&nplay);
                        break;
                    case 2:
                        player1_score-=green(&nplay);
                        break;
                    case 3:
                        player1_score-=brown(&nplay);
                        break;
                    case 4:
                        player1_score-=blue(&nplay);
                        break;
                    case 5:
                        player1_score-=pink(&nplay);
                        break;
                    case 6:
                        player1_score-=black(&nplay);
                        break;
                    default:
                        player1_score-=brown(&nplay);
                        break;
                }
                break;
            case 4:
                player1_score-=brown(&nplay);
                player_count=1;
                break;

            
            default:
                player_count=1;
                break;
            }
            continue;




        }
        else{
            printf("\n\n\t\t\t%s CAN NOW PLAY!!\n\n",player2_name);
            int choice_1;
            printf("\t\t\tChoose any one of the options below\n\n");
            
            printf("\t\t\t1.%s POT THE RED BALL\n",player2_name);
            
            printf("\t\t\t2.%s JUST HIT THE RED BALL AND PLAYED SAFE\n",player2_name);
            printf("\t\t\t3.%s HIT ONE OF THE COLOUR BALLS OTHER THAN RED OR POTTED A COLOUR BALL\n",player2_name);
            
            printf("\t\t\t4.%s DID NOT HIT ANY BALL OR HIT THE WHITE BALL IN ANY POCKET\n",player2_name);
            printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4): ");
            scanf("%d",&choice_1);
            switch (choice_1)
            {
            case 1:
                player2_score+=1;
                red_ball_count+=1;
                printf("\n\n\t\t\tNOW HIT A COLOUR BALL OTHER THAN RED");
                int choice_2;
                
                printf("\n\n\t\t\tChoose any one of the options below\n\n");
                
                printf("\t\t\t1.%s POT THE YELLOW BALL\n",player2_name);
                printf("\t\t\t2.%s POT THE GREEN BALL\n",player2_name);
                printf("\t\t\t3.%s POT THE BROWN BALL\n",player2_name);
                printf("\t\t\t4.%s POT THE BLUE BALL\n",player2_name);
                printf("\t\t\t5.%s POT THE PINK BALL\n",player2_name);
                printf("\t\t\t6.%s POT THE BLACK BALL\n",player2_name);
                printf("\t\t\t7.%s DID A FOUL\n",player2_name);
                printf("\t\t\t8.%s DID NOT POT COLOUR BALL\n",player2_name);
                printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6/7/8): ");
                scanf("%d",&choice_2);
                switch (choice_2)
                {
                case 1:
                    player2_score+=yellow(&nplay);
                    break;
                case 2:
                    player2_score+=green(&nplay);
                    break;
                case 3:
                    player2_score+=brown(&nplay);
                    break;
                case 4:
                    player2_score+=blue(&nplay);
                    break;
                case 5:
                    player2_score+=pink(&nplay);
                    break;
                case 6:
                    player2_score+=black(&nplay);
                    break;
                case 7:;
                    int choice_3;
                    
                    printf("\n\n\t\t\tChoose any one of the options below\n\n");
                    
                    printf("\t\t\t1.%s FOUL POT THE YELLOW BALL\n",player2_name);
                    printf("\t\t\t2.%s FOUL POT THE GREEN BALL\n",player2_name);
                    printf("\t\t\t3.%s FOUL POT THE BROWN BALL\n",player2_name);
                    printf("\t\t\t4.%s FOUL POT THE BLUE BALL\n",player2_name);
                    printf("\t\t\t5.%s FOUL POT THE PINK BALL\n",player2_name);
                    printf("\t\t\t6.%s FOUL POT THE BLACK BALL\n",player2_name);
                    printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6): ");
                    scanf("%d",&choice_3);
                    switch (choice_3)
                    {
                        case 1:
                            player2_score-=yellow(&nplay);
                            player_count=0;
                            break;
                        case 2:
                            player2_score-=green(&nplay);
                            player_count=0;
                            break;
                        case 3:
                            player2_score-=brown(&nplay);
                            player_count=0;
                            break;
                        case 4:
                            player2_score-=blue(&nplay);
                            player_count=0;
                            break;
                        case 5:
                            player2_score-=pink(&nplay);
                            player_count=0;
                            break;
                        case 6:
                            player2_score-=black(&nplay);
                            player_count=0;
                            break;
                        default:
                            player2_score-=brown(&nplay);
                            player_count=0;
                            break;
                    }
                    break;
                case 8:
                    player_count=0;
                    break;
                default:
                    player_count=0;
                    break;
                }
                break;
            case 2:
                player_count=0;
                break;
            case 3:;
                int choice_4;
                player_count=0;
                
                printf("\n\n\t\t\tChoose any one of the options below\n\n");
                
                printf("\t\t\t1.%s FOUL POT THE YELLOW BALL\n",player2_name);
                printf("\t\t\t2.%s FOUL POT THE GREEN BALL\n",player2_name);
                printf("\t\t\t3.%s FOUL POT THE BROWN BALL\n",player2_name);
                printf("\t\t\t4.%s FOUL POT THE BLUE BALL\n",player2_name);
                printf("\t\t\t5.%s FOUL POT THE PINK BALL\n",player2_name);
                printf("\t\t\t6.%s FOUL POT THE BLACK BALL\n",player2_name);
                printf("\n\n\t\t\tENTER YOUR CHOICE(1/2/3/4/5/6): ");
                scanf("%d",&choice_4);
                switch (choice_4)
                {
                    case 1:
                        player2_score-=yellow(&nplay);
                        break;
                    case 2:
                        player2_score-=green(&nplay);
                        break;
                    case 3:
                        player2_score-=brown(&nplay);
                        break;
                    case 4:
                        player2_score-=blue(&nplay);
                        break;
                    case 5:
                        player2_score-=pink(&nplay);
                        break;
                    case 6:
                        player2_score-=black(&nplay);
                        break;
                    default:
                        player2_score-=brown(&nplay);
                        break;
                }
                break;
            case 4:
                player2_score-=brown(&nplay);
                player_count=0;
                break;

            
            default:
                player_count=0;
                break;
            }
            continue;
        }
    }
    printf("\n\n\n\t\t\t***CHAMPION OF THE WORLD SNOOKER TOURNAMENT IS***");
    if(player1_score>player2_score){
        printf("\n\n\t\t\t\t%s\n",player1_name);
        }
    else if(player1_score<player2_score){
        printf("\n\n\t\t\t\t%s\n",player2_name);
        }
    else{
        printf("\n\n\t\t\t\tIT IS A DRAW\n");
    }
    return 0;

}

