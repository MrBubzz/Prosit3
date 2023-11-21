#include "header.h"

int main()
{
    int pause;
    Point* p1;
    Point* p2;
    Point* p3;
    Parcours* parcours;

    p1 = new Point2D(0.0, 0.0);
    p2 = new Point2D(1.0, 1.0);
    p3 = new Point2D(2.0, 2.0);
    parcours = new Parcours2D(3);

    parcours->add(p1);
    parcours->add(p2);
    parcours->add(p3);

    cout << "---2D---" << endl;
    cout << parcours->calculDistance() << endl;
    //parcours->afficherInfos();

    p1 = new Point3D(0.0, 0.0, 0.0);
    p2 = new Point3D(1.0, 1.0, 1.0);
    p3 = new Point3D(2.0, 2.0, 2.0);
    parcours = new Parcours3D(3);

    parcours->add(p1);
    parcours->add(p2);
    parcours->add(p3);

    cout << "---3D---" << endl;
    cout << parcours->calculDistance() << endl;
    parcours->afficherInfos();

    p1 = new Point2D(0.0, 0.0);
    p2 = new Point3D(1.0, 1.0, 1.0);
    (p1 = p2)->getX();
    (p1 = p2)->getY();

    cin >> pause;

    return 0;
}