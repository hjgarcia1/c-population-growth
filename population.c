#include <stdio.h>

static int initial_popupulation = 9;

int calculate_growth(int starting_size, int ending_size);
int get_starting_size();
int get_ending_size(int starting_size);

int main(void)
{
    int starting_size, ending_size, years = 0;

    starting_size = get_starting_size();

    ending_size = get_ending_size(starting_size);

    years = calculate_growth(starting_size, ending_size);

    printf("Years: %i\n", years);
}

int calculate_growth(starting_size, ending_size)
{
    int years = 0, population_gain;

    do
    {
        starting_size = starting_size + ((starting_size / 3) - (starting_size / 4));

        years++;

        printf("Population Growth: %i - For year %i\n", starting_size, years);

    } while (starting_size < ending_size);

    return years;
}

int get_starting_size()
{
    int starting_size = 0;

    printf("\nWhat is the starting size: ");

    do
    {
        scanf("%d", &starting_size);
    } while (starting_size < initial_popupulation);

    return starting_size;
}

int get_ending_size(int starting_size)
{
    int ending_size;

    printf("\nWhat is the ending size: ");

    do
    {
        scanf("%d", &ending_size);
    } while (starting_size > ending_size);

    return ending_size;
}