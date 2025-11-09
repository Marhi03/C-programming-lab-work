#include <stdio.h>
int main()
{
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int notecount[9] = {0};
    printf("Enter the amount: \n");
    scanf("%d", &amount);
    int remaining = amount;
    for(int i=0; i<9; i++)
    {
        if(remaining >= notes[i])
        {
            notecount[i] = remaining/notes[i];
            remaining = remaining%notes[i];
        }
    }
    printf("Minimum no. of notes required for %d:\n", amount);
    for(int i=0; i<9; i++)
    {
        if(notecount != 0)
        {
            printf("%d note(s) of Rs. %d\n", notecount[i], notes[i]);
        }
    }
}
