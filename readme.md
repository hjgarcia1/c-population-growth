# Background
Every year, if we have population of n llamas....

* gain n/3 llamas
* lose n/4 llamas

Ex...
How many years to go from 20 to 30 llamas?

20 llamas after 0 years

After 1st year...
Gain: 20/3 = 6 (int)
Lost: 20/4 = 5

Net gain of 1...so after 1st year we would have 21 llamas.

After 2nd year...
Gain: 21/3 = 7
Lose: 21/4 = 5

In year 2 net gain of 2...so after 2nd year we would 23 llamas.

So on...

## Formula
n = n + (n/3) - (n/4);

# Needs of the Program

1. Program is called population
2. Prompt the user for a starting population
3. Prompt the user for an ending population
4. Print the years it will take to take the population

# Details

Ensure the user's input is at least 9 otherwise reprompt
Ensure the user's input is at least the start size otherwise reprompt