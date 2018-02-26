bool isOneBit(int bits[], int size) {
    int index = 0;
    while (index < size - 1) {
        if (bits[index] % 2 == 1) {
            index += 2;
        } else {
            index += 1;
        }
    }

    return index == (size - 1);
}