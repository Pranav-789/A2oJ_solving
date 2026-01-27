#include<stdio.h>

// make a structure for state
// each state consisting count and transitions

// for transition we need which node we want to go on and by which symbol
// make transition struct first

typedef struct transition{
    int to;
    char ip;
} Transition;


// every state can have atmax N*2 transition as this is an NFA
typedef struct state{
    int count;
    Transition t[10];
} State;
// 10 transitions means atmax 5 states are allowed in this implementation

int main(){
    int N;
    printf("Enter the number of states: ");
    scanf("%d", &N);
    State NFA[N];

    while (1)
    {
        int from, to;
        char sym;

        printf("From:(press -1 to exit) ");
        scanf("%d", &from);
        if(from == -1) break;
        printf("To: ");
        scanf("%d", &to);
        printf("Symbol: ");
        scanf("%c", &sym);

        NFA[from].t[NFA[from].count].to = to;
        NFA[from].t[NFA[from].count].ip = sym;
        NFA[from].count++;
    }

    printf("Initialize Path");
    int start, final;
    printf("Enter the Starting State: ");
    scanf("%d", &start);
    printf("Enter the number of final states: ");
    int finalStates;
    scanf("%d", &finalStates);

    int arr[finalStates];

    for (int i = 0; i < finalStates; i++)
    {
        scanf("%d", &arr[i]);
    }
    

}