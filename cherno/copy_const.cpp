#include <iostream>
#include <string>
using namespace std;
struct Vector2
{
        float x, y ;


};


int main()
{
        // a shallow copy is made of a
        // two copies of a are stored in memory
        int a = 2;
        int b = a;
        b = 3;


        // d.x = 5
        // c.x will remain 2
        Vector2 c = { 2, 3 };
        Vector2 d = c;
        d.x = 5;
        //std::cout << c << std::endl;
        //std::cout << d << std::endl;

        // Vector2 in this case is a pointer
        // Pointer is copied not the actual vector itself
        Vector2 *e = new Vector2();
        Vector2 *f = e;
        f -> x = 2;
        //std::cout << e << std::endl;
        //std::cout << f << std::endl;


return 0;
}
