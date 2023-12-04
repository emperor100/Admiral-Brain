/*

[capture_clause](parameters) -> return_type {
    // function body
}


Capture Clause: [ ] - This part is used to capture variables from the surrounding scope. Variables can be captured by value or by reference. For example, [x, &y] captures x by value and y by reference.

Parameters: (parameters) - Similar to regular function parameters.

Return Type: -> return_type - Specifying the return type is optional. If omitted, the return type is inferred from the return statements in the function body.

Function Body: { /* code } - The actual code of the function.
*/


#include <iostream>

void captureClosure() {

    int x = 5;
    int y = 10;

    // Capture variables by value
    auto add = [&x, y]() {
        return x + y;
    };
}

void mutableExample() {

    int count = 0;

    // Capture by value and make the lambda mutable
    auto increment = [count]() mutable {
        ++count;
        return count;
    };

    // Using the lambda function
    std::cout << "Initial Count: " << count << std::endl;
    std::cout << "Incremented Count: " << increment() << std::endl;
    std::cout << "Count after lambda: " << count << std::endl;

}

int main() {
    // Lambda function that takes two integers and returns their sum
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    // Using the lambda function
    int result = add(3, 5);
    std::cout << "Result: " << result << std::endl;

    captureClosure();
    mutableExample();
    return 0;
}
