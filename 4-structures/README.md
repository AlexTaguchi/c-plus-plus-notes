# structures

## Creating object members with structures

```c++
// A structure is a group of objects bundled under one name
struct fruits {
    int weight;
    double price;
} apple, banana, melon;

// Define the three objects
apple.weight = 100;
apple.price = 1.00;
banana.weight = 116;
banana.price = 0.50;
melon.weight = 6450;
melon.price = 4.50;
cout << "Apple: " << apple.weight << "g, $" << apple.price << '\n';
cout << "Banana: " << banana.weight << "g, $" << banana.price << '\n';
cout << "Melon: " << melon.weight << "g, $" << melon.price << '\n';
```

OUTPUT:

```bash
Apple: 100g, $1
Banana: 116g, $0.5
Melon: 6450g, $4.5
```

## Creating an object array with structures

```c++
// Object(s) can also be arrays
struct movies {
    string title;
    int year;
} films [3];
films[0].title = "Toy Story";
films[0].year = 1995;
films[1].title = "The Matrix";
films[1].year = 1999;
films[2].title = "Star Wars";
films[2].year = 1977;
for (int film = 0; film < 3; film++) {
    cout << films[film].title << " (" << films[film].year << ")\n";
}
```

OUTPUT:

```bash
Toy Story (1995)
The Matrix (1999)
Star Wars (1977)
```