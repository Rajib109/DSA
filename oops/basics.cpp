#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    int stamina;

    void gethealth()
    {
        cout << "Health: " << health << endl;
    }

    Hero()
    {
        health = 0;
        stamina = 0;
    }
    Hero(int h, int s)
    {
        health = h;
        stamina = s;
    }
};

int main()
{

    Hero hero1;

    hero1.gethealth();
    hero1.stamina = 50;

    Hero hero2(100,9);
    hero2.gethealth();
    // hero2.stamina = 75;
    cout << hero2.stamina;

    return 0;
}