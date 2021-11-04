#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <time.h>



//O(1) constant time
void constantTime(unsigned long int n)
{
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    n;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "constant time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " nanoseconds" << std::endl;


}
//O(n) linear time
void linearTime(unsigned long int n)
{
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    for (unsigned long int i = 0; i < n; i++)
    {
        continue;
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "linear time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " nanoseconds" << std::endl;
}


//O(n^2) quadratic time
void quadraticTime(unsigned long int n)
{
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    for (unsigned long int i = 0; i < n; i++)
    {
        for (unsigned long int j = 0; j < n; j++)
        {
            continue;
        }
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "quadratic time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " nanoseconds" << std::endl;
}



//O(log n) logarithmic time
void logarithmicTime(unsigned long int n)
{
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    for (unsigned long int i = 1; i < n; i = i * 2)
    {
        continue;
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "logarithmic time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " nanoseconds" << std::endl;
}


void code()
{
    int x = 100000;
    constantTime(x);
    linearTime(x);
    quadraticTime(x);
    logarithmicTime(x);
  
}


int main()
{
    code();

}



