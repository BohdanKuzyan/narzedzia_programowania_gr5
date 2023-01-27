int czyPodzielne(int a)
{
    int sumaryczne = 0;
    if (a > 2 && a<30)
    {
        for (int i = 1; i < a; i++)
        {
            if (a%i == 0)
            {
               sumaryczne = sumaryczne + i;
            }
        }
    }
    return sumaryczne;
}
