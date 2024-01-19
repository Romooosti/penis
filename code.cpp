#include <iostream>
#include <ctime>

int main()
{
    int points = 0;
    srand(time(NULL));
    int N = rand()%100;
    for (int i; i < N; i++){
        std::cout <<"penis"<<std::endl;
        points ++;
    }
    std::cout << "Кількість пенісів: " << points << std::endl;
    return 0;
}