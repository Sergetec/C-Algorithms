#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int> (time(nullptr))); 
  
    for (int i = 1; i <= 100; i++)
    {
        cout << rand() << " ";
        if (i % 5 == 0)
        {
          cout << endl;
        }
     }
  return 0;
}
