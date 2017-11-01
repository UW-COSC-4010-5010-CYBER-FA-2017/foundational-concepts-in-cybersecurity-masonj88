#include <iostream>

using namespace std;


// This hashing algorithm is found at http://www.partow.net/programming/hashfunctions/#RSHashFunction
unsigned int RSHash(const char* str, unsigned int length)
{
   unsigned int b    = 378551;
   unsigned int a    = 63689;
   unsigned int hash = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)
   {
      hash = hash * a + (*str);
      a    = a * b;
   }

   return hash;
}

int main() {

    cout << "RSHash of \"Hello World\" is: " << RSHash("Hello World", 10) << endl;
    















}