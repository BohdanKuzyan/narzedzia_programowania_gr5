int factorial(int number)
{
        int result;
        if(number == 1)
        {
                result = 1;
        }
        else
        {
                result = number * factorial(number - 1);
        }
        return result;
}
