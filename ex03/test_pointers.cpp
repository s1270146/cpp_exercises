// test_pointers.cpp
// COMPLETE include necessary headers
#include <iostream>

using namespace std;

int main(void)
{
  //
  // 1. declare a variable f as a pointer to a float
  // 2. create a float variable named pi, and store the value 3.14159f
  // 3. make f points to pi
  // 4. print out the content of the memory location pointed to by f
  float* f;
  float pi = 3.14159f;
  f = &pi;
  cout << *f << endl;

  //
  short a[] = {1, 2, 3, 4, 5};
  // 5. declare a variable ip as a pointer to a short integer
  // 6. make ip points to the beginning of the array a
  // 7. print out what ip points to and the content of a[0] (verify they are the same)
  // 8. increase ip by 3 and check that what it points to corresponds to a[3]
  // 9. make ip points to the last element of the array by increasing it by 1
  //     and check that what it points to corresponds to a[4]
  short* p;
  p = a;
  cout << *p << " " << a[0] << endl;
  p += 3;
  cout << *p << " " << a[3] << endl;
  p++;
  cout << *p << " " << a[4] << endl;

  // 
  int n = 10;
  // 10. declare a variable d as a pointer to double and 
  // make it point to an array of "n" element of type "double" created on the heap
  // 11. store in each d[i] (for i=0 to n-1) the value double(i) / 5.0;
  // 12. print out each element of d
  // 13. delete the previously allocated memory

  double* d;
  d = new double[n];
  for(int i=0;i<n;i++)
  {
      d[i] = double(i)/5.0;
  }
  for(int i=0;i<n;i++)
  {
      cout << d[i] << " ";
  }
  cout << endl;
  delete[] d;


  //
  int m = 5;
  n = 20;
  double** dd;
  // 14. allocate memory for a 2d array of size m * n on the heap (i.e. m arrays of size n).  
  // Make dd points to this 2d array.
  // 15. set the element dd[i][j] to be equal to double(i)*double(j)
  // 16. delete the memory allocated for the 2d array
  dd = new double*[m];
  for(int i=0;i<m;i++)
  {
      dd[i] = new double[n];
  }
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          dd[i][j] = double(i)*double(j);
      }
  }
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout << dd[i][j] << " ";
      }
      cout << endl;
  }
  for(int i=0;i<m;i++)
  {
      delete[] dd[i];
  }
  delete[] dd;
  

  return 0;
}