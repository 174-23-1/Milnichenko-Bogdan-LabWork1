#include <iostream>

int main()
{
    const float x = 75.3, y = 0.57;
    const char z = 2;

    float nominator, denominator;
    nominator = (y * x + (1.2 * x) / z - y / (7 * x - 3));
    denominator = (15 * z + 1.2);
    float result = -(nominator / denominator);

    std::cout << "Result = " << result;
    return 0;
}