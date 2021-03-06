#include "solution.h"

/// Array parameter: https://stackoverflow.com/questions/35531914/passing-array-into-function-pointer-vs-reference-c-vs-c
Result findSum(const int inputs[], const int size, const int target) {
    Result result = {-1, -1};

    for (int index = 0; index < size - 1; index++) {
        int first = inputs[index];

        if (first > target) {
            return result;
        }

        int expected = target - first;

        for (int index2 = index + 1; index2 < size; index2++) {
            int second = inputs[index2];
            if (second == expected) {
                result = {index, index2};
                return result;
            }
            if (second > expected) {
                break;
            }
        }
    }

    return result;
}

Result findSum(const std::vector<int> inputs, const int target) {
    Result result = {-1, -1};

    for (int first = 0, second = inputs.size() - 1; first < second;) {
        int value = inputs.at(first) + inputs.at(second);
        if (value < target) {
            first++;
        } else if (value > target) {
            second--;
        } else if (value == target) {
            result = {first, second};
            return result;
        }
    }

    return result;
}
