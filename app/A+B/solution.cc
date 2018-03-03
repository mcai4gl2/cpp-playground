int add(int a, int b) {
    int sum = a ^ b;
    int nextCarry = (a & b) << 1;
    while (nextCarry != 0) {
        int currentCarry = sum & nextCarry;
        sum = sum ^ nextCarry;
        nextCarry = currentCarry << 1;
    } 
    return sum;
}