# Requirements

## Introduction
  Snooker is one the most fascinating sports with a unique set of audience passionate towards this game.Eventhough its popularity is dominant in countries like Ireland,Australia   and Scotland,the roots of this game belong to India.Lieutenant Neville Francis Fitzgerald Chamberlain created the game of snooker in the Indian town of Jabalpur in 1875.
  The main objective of the game is to strike the white cue ball with a cue in order to pot the red ball first and then again strike to pot the object ball.This game continues     till all the balls have been potted.The player with highest points wins the match.
  For more info about rules,game plan and fouls please refer [Snooker](https://en.wikipedia.org/wiki/Rules_of_snooker#:~:text=The%20objective%20of%20the%20game,foul%20committed%20by%20the%20opponent.)

## FEATURES
  Snooker is a game that is played by 2 individuals at a time.My project will act as a utility for snooker by acting as a score board to decide the winner of the match.
  This project has been designed with great precision with respect to the rules of snooker and it also has a great understanding of various scenarios that might take place 
  during the match.
  
## STATE OF ART , AGEING AND COST
  ### EVOLUTION OF SNOOKER SCOREBOARDS
  #### G.WRIGHT & C2 , LONDON
  #### COST - Rs 2500
  ![snookeroldboard](https://user-images.githubusercontent.com/72341259/114258652-b0efd400-99e5-11eb-9b8a-2ee61cac9372.jpg)
  
  #### VICTORIAN SNOOKER, BILLIARD SCORE BOARD IN MAHOGANY
  #### COST - Rs 5000
  ![snookeroldboard1](https://user-images.githubusercontent.com/72341259/114258896-974f8c00-99e7-11eb-95bf-2d0e4e73b1de.jpg)
  
  #### ELECTRONIC SCOREBOARD
  #### COST - Rs 10,000
  ![snookerdigital](https://user-images.githubusercontent.com/72341259/114259025-979c5700-99e8-11eb-965a-808bc8d9fbb9.jpg)
  
## SWOT ANALYSIS
![swotanalysis](https://user-images.githubusercontent.com/72341259/114260056-1fd22a80-99f0-11eb-8554-81f391a0b55a.png)

# 4W&#39;s and 1&#39;H

## Who:
  Snooker committees,lounge owners and organisations for Snooker championsips.

## What:
  This project will act as automated snooker counterboard.

## When:
  This project can be used during competitions,championships or even just for playing snooker with friends. 
  
## Where:
  This project can be implemented in snooker lounges,major snooker tournaments and also at your home.

## How:
  This project will just take some input from the user and based on that it will perform necessary calculations 
  and act as snoooker scoreboard for deciding the winner of the match.
# Detail requirements
## High Level Requirements: 
| ID | Description | Category | 
| ----- | ----- | ----- |
| HR1 | Win Points | Technical |
| HR2 | Loose Points | Technical |
| HR3 | Calculate Winner | Technical |
| HR4 | 2 Players | Basic |

## Low Level Requirements: 
| ID | Description | HLR ID | 
| ----- | ----- | ----- | 
| LR1 | Pot Solid red balls | HR1 |
| LR2 | Pot Object balls(after LR1) | HR1 |
| LR3 | Commit a foul by hitting object ball first | HR2 |
| LR4 | Commit a foul by not hitting any ball | HR2 |
| LR5 | Commit a foul by potting wrong ball | HR2 |
| LR6 | Points increased/decreased for red ball-1/4 | HR3 |
| LR7 | Points increased/decreased for yellow ball-2/4 | HR3 |
| LR8 | Points increased/decreased for green ball-3/4 | HR3 |
| LR9 | Points increased/decreased for brown ball-4/4 | HR3 |
| LR10 | Points increased/decreased for blue ball-5/5 | HR3 |
| LR11 | Points increased/decreased for pink ball-6/6 | HR3 |
| LR12 | Points increased/decreased for black ball-7/7 | HR3 |
| LR13 | Points decreased for white ball(No other balls touched)-4 | HR3 |
| LR14 | Compare Total points of each player  | HR3 |
