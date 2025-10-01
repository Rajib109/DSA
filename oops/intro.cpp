#include<iostream>
#include<cstring> // For string manipulation functions like strlen and strcpy
using namespace std;

// Hero class definition - Represents a game character with health, name, and level attributes
class Hero {
    
    // Private members - Only accessible within the class
    private:
    int health;  // Stores the health points of the hero

    // Public members - Accessible from outside the class
    public:
    char *name;        // Pointer to dynamically allocated name string
    char level;        // Character representing the hero's level (A, B, C, etc.)
    static int timeToComplete;  // Static member shared by all Hero objects (e.g., game deadline)

    // Constructors and Destructor:

    // 1. Default Constructor - Initializes a hero with default values
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100]; // Allocate memory for name (100 characters)
    }

    // 2. Parameterized Constructor (health only)
    Hero(int health) {
        this->health = health;  // 'this' pointer refers to current object
        name = new char[100];   // Allocate name memory
    }

    // 3. Parameterized Constructor (health and level)
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];
    }

    // 4. Copy Constructor (Deep Copy implementation)
    Hero(Hero& temp) {
        // Create new memory for name to avoid shallow copy issues
        char *ch = new char[strlen(temp.name) + 1]; // +1 for null terminator
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Member Functions:

    // Prints all hero details in a readable format
    void print() {
        cout << endl;
        cout << "[ Name: " << this->name << " , ";
        cout << "Health: " << this->health << " , ";
        cout << "Level: " << this->level << " ]" << endl << endl;
    }

    // Getter methods (provide read-only access to private members)
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    // Setter methods (allow controlled modification of private members)
    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    // Sets the hero's name (uses strcpy for safe string copying)
    void setName(char name[]) {
        strcpy(this->name, name);
    }

    // Static function (can be called without an object instance)
    static int random() {
        return timeToComplete;
    }

    // Destructor - Cleans up dynamically allocated memory
    ~Hero() {
        cout << "Destructor called" << endl;
        delete[] name;  // Crucial to prevent memory leaks
    }
};

// Initialize static member (shared across all Hero objects)
int Hero::timeToComplete = 5;

int main() {
    // Static Member Demonstration:
    cout << "Time to complete (static): " << Hero::timeToComplete << endl;
    cout << "Random static value: " << Hero::random() << endl;

    // Object Creation Examples:
    Hero h1; // Static allocation - destructor auto-called when out of scope
    
    Hero *h2 = new Hero(); // Dynamic allocation
    delete h2; // Must manually call destructor for dynamic objects

    // Deep Copy Demonstration:
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    Hero hero2(hero1); // Calls copy constructor (deep copy)

    // Modify original to prove deep copy worked
    hero1.name[0] = 'G'; // Only changes hero1's name

    hero1.print();  // Shows modified name ("Gabbar")
    hero2.print();  // Shows original name ("Babbar")

    // Assignment Operator (Shallow Copy):
    hero1 = hero2; // Default assignment does shallow copy
    hero1.print();
    hero2.print();

    // Parameterized Constructors:
    Hero ramesh(10); // Health = 10
    ramesh.print();

    Hero *dynamicHero = new Hero(11); // Dynamic with health
    dynamicHero->print();
    delete dynamicHero; // Clean up

    Hero temp(22, 'B'); // Health and level
    temp.print();

    // Getter/Setter Usage:
    Hero h3;
    h3.setHealth(80);
    h3.setLevel('B');
    cout << "Level is: " << h3.level << endl; // Direct access (public)
    cout << "Health is: " << h3.getHealth() << endl; // Via getter (private)

    Hero *h4 = new Hero;
    h4->setLevel('A');
    h4->setHealth(70);
    cout << "Level is: " << h4->level << endl;
    cout << "Health is: " << h4->getHealth() << endl;
    delete h4;

    // Size and Basic Usage:
    Hero finalHero;
    cout << "Size of finalHero object (includes pointers): " << sizeof(finalHero) << endl;

    finalHero.setHealth(70);
    finalHero.level = 'A';

    cout << "Health is: " << finalHero.getHealth() << endl;
    cout << "Level is: " << finalHero.level << endl;

    return 0;
}