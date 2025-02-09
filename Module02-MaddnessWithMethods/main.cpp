#include "MaddnessWithMethods.h"
#include <iostream>

int main() {
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    std::cout << "Larger number is: " << compareTwoInts(num1, num2) << std::endl;
    std::cout << "Sum is: " << sumTwoInts(num1, num2) << std::endl;

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.