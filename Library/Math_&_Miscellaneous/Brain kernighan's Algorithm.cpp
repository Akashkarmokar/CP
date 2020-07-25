class gfg
{
public:
	unsigned int setBitCount(int n )
	{
		int count = 0 ;
		while(n)
		{
			n = n & (n-1);
			count++;
		}
		return count;
	}
};
//complexity : O(logn)