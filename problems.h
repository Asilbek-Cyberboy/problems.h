// Problem 1
// floorFunction
// ceilingFunction
int floorFunction(double x) {
    return x;
}
int ceilingFunction(double x) {
    int intpart = int(x);
    return (intpart == x) ? intpart : x+1;
}
//Problem 2
//swap_values
void swap_values(float &a, float &b) {
    a = a+b;
    b = a-b;
    a = a-b;
}
// Problem 3
//multiply
int multiply(int x, int y) {
    if(y==1) {
        return x;
    }
    return x+multiply(x, y-1);
}
// Problem 4
//digitSum
int digitSum(int n) {
    if(n==0) {
        return 0;
    }
    return n%10 +digitSum(n/10);
}
// Problem 5
//decimalToBinary
int decimalToBinary(int n) {
    if(n==0) {
        return 0;
    }
    return n%2 + 10*decimalToBinary(n/2);
}
// Problem 6
//midValue
template<typename T>
T midValue(T a, T b, T c) {
    if((a>=b && a<=c)|| (a>=c && a<=b)) {
        return a;
    }
     if((b>=a && b<=c) || (b>=c && b<=a)) {
        return b;
    }
        return c;
}