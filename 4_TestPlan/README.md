# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|H01          |Only 2 players required                                       |Names of 2 players|Names of 2 players|Names of 2 players|Requirement based|
|H02          |Winner of the Game                                            |Scores of two players |Player name with highest score|Player name with highest score|Scenario based|
|H03          |Gain/Loose Points                                             |Pot Balls or do a foul | Scores increased/decreased |Scores increased/decreased |Technical

## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|L01          |H01 | If more than or less than two players play             | (0,0)/(1,1)|ERROR|ERROR|Requirement based|
|L02          |H02 | If both scored equal points                            |Scores of 2 players|DRAW|DRAW|Scenario based|
|L03          |HO3 | Pot a red ball                                         |(0,1)/(1,0)|1|1|Technical based|
|L04          |HO3 | Pot a yellow ball                                         |(0,1)/(1,0)|2|2|Technical based|
|L05          |HO3 | Pot a green ball                                         |(0,1)/(1,0)|3|3|Technical based|
|L06          |HO3 | Pot a brown ball                                         |(0,1)/(1,0)|4|4|Technical based|
|L07          |HO3 | Pot a blue ball                                         |(0,1)/(1,0)|5|5|Technical based|
|L08          |HO3 | Pot a pink ball                                         |(0,1)/(1,0)|6|6|Technical based|
|L09          |HO3 | Pot a black ball                                         |(0,1)/(1,0)|7|7|Technical based|
|L010          |HO3 | Pot a white ball                                         |(0,1)/(1,0)|4|4|Technical based|
