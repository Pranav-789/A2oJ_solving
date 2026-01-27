#include<stdio.h>

// constructing a binary dfa

typedef struct state{
    int id;
    struct state* zero;
    struct state* one;
} State;

int stringAcceptor(int currState, char str[], State DFA[],  int finalArr[], int finalStates){
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == '0' && DFA[currState].zero != NULL){
            currState = DFA[currState].zero->id;
        }else if(str[i] == '1' && DFA[currState].one != NULL){
            currState = DFA[currState].one->id;
        }else{
            return 0;
        }
        i++;
    }
    for (int j = 0; j < finalStates; j++)
    {
        if(currState == finalArr[j]) return 1;
    }
    
    return 0;
}

int main(){
    int N;
    printf("Enter the number of nodes: ");

    scanf("%d", &N);

    State DFA[N];

    for (int i = 0; i < N; i++)
    {
        DFA[i].id = i;
    }
    

    for (int i = 0; i < N; i++)
    {
        int to;
        printf("State %d on input of 0 goes to ", i);
        scanf("%d", &to);
        DFA[i].zero = &DFA[to];
        printf("State %d on input of 1 goes to ", i);
        scanf("%d", &to);
        DFA[i].one = &DFA[to];
    }

    int startingState;
    printf("Enter starting state: ");
    scanf("%d", &startingState);

    int finalStates;
    printf("Enter number of final states: ");
    scanf("%d", &finalStates);

    int finalArr[finalStates];
    for (int i = 0; i < finalStates; i++)
    {
        int x;
        scanf("%d", &x);
        finalArr[i] = x;
    }

    char input[10];
    printf("Enter the string: ");
    scanf("%s", &input);  

    if(stringAcceptor(startingState, input, DFA, finalArr, finalStates)){
        printf("String accepted");
    }
    else{
        printf("String rejected");
    }
}