#include <bits/stdc++.h>
using namespace std;

int towerofHanoi(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        return 1;
    }
    int count;
    count = towerofHanoi(n - 1, from, aux, to);

    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;

    count++;

    count += towerofHanoi(n - 1, aux, to, from);

    return count;
}

int main()
{

    cout<<towerofHanoi(3,1,2,3);
    return 0;
}