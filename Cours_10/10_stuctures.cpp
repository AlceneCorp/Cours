#include <iostream>
#include <string>

using namespace std;

struct Points
{
    string name;
    int x;
    int y;
    int z;
};

//Prototypage
void afficherPoint(Points paramPoints);

int main() 
{
    Points pt1, pt2;

    pt1.name = "Point de Peach";
    pt1.x = 10;
    pt1.y = 2;
    pt1.z = 5;

    pt2.name = "Point de Alcene";
    pt2.x = 1;
    pt2.y = 20;
    pt2.z = 50;

    afficherPoint(pt1);
    afficherPoint(pt2);

    return 0;
}

//Implémentation
void afficherPoint(Points paramPoints)
{
    cout << paramPoints.name << " : " << endl;
    cout << "\tx = " << paramPoints.x << endl;
    cout << "\ty = " << paramPoints.y << endl;
    cout << "\tz = " << paramPoints.z << endl;
}