#include <iostream>
#include <cstdlib>
#include <ctime>
#include <crtdbg.h>

int main()
{
#ifdef _DEBUG
    _onexit(_CrtDumpMemoryLeaks);
#endif

    int drop;
    int NumOfBalls;
    int NumOfLevels;

    std::cout << "How Many Balls Do You Wish To Drop?: ";
    std::cin >> NumOfBalls;
    std::cout << "How Many Levels Do You Wish To Drop Them Through?: ";
    std::cin >> NumOfLevels;

    int AmountOfBuckets = NumOfLevels + 1;
    int* balls = (int*)malloc(sizeof(int) * NumOfBalls);
    int* buckets = (int*)malloc(sizeof(int) * AmountOfBuckets);

    for (int i = 0; i < AmountOfBuckets; i++) {
        buckets[i] = 0;
    }

    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < NumOfBalls; i++) {
        int position = 0;
        for (int j = 0; j < NumOfLevels; j++) {
            drop = rand() % 2;
            if (drop > 0) {
                position++;
            }
        }
        balls[i] = position;
        buckets[position]++;
    }

    
    for (int i = 0; i < AmountOfBuckets; i++) {
        std::cout << "Bucket " << i << ": ";
        for (int j = 0; j < buckets[i]; j++) {
            std::cout << "X ";
        }
        std::cout << "\n";
    }

    free(balls);
    balls = nullptr;
    free(buckets);
    buckets = nullptr;

    return 0;
}