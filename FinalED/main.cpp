#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;

int main()
{
    List listita;

    listita.insert(15);
    listita.insert(17);
    listita.insert(19);
    listita.insert(21);
    listita.insert(13);

    cout << listita << endl;;

    cout << listita.search(19)->getDato() << endl;

    return 0;
}
