namespace rin
{
    int rin_count(int n)
    {
        int count = 0;

        while (n > 0)
        {
            n /= 10;
            count++;
        }

        return count;
    }

    int rin_reverse(int n)
    {
        int reversed = 0;

        while (n != 0)
        {
            int temp = n % 10;
            reversed = reversed * 10 + temp;
            n /= 10;
        }

        return reversed;
    }
}