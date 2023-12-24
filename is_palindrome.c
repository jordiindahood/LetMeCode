bool isPalindrome(int x) {
    long num1 = 0, num2 = (long)x;

    if(x < 0)
    return false;

    if((x % 10) == x)
        return true;

    while (num2 != 0){
        num1 = num1 * 10 + ( num2 % 10 );
        num2 = num2 / 10;
        if (num1 == x)
            return true;
    }
    return false;
}
