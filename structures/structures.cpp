#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // A data structure is a group of elements bundled under one name
    struct fruits {
        int weight;
        double price;
    } apple, banana, melon;

    // Define its three objects
    apple.weight = 1;
    apple.price = 1.00;
    banana.weight = 1;
    banana.price = 0.50;
    melon.weight = 5;
    melon.price = 4.50;
    cout << "Apple: " << apple.weight << "lbs, $" << apple.price << '\n';
    cout << "Banana: " << banana.weight << "lbs, $" << banana.price << '\n';
    cout << "Melon: " << melon.weight << "lbs, $" << melon.price << '\n';

    // Object(s) can also be arrays
    struct movies {
        string title;
        int year;
    } films [3];
    films[0].title = "Toy Story";
    films[0].year = 2000;
    films[1].title = "The Matrix";
    films[1].year = 1999;
    films[2].title = "Cool";
    films[2].year = 2001;
    for (int film = 0; film < 3; film++) {
        cout << films[film].title << films[film].year << '\n';
    }
    return 0;
}
