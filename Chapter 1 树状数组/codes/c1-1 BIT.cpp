struct BIT
{
	static const int maxn = 1005;
	static inline int lowbit(int x) { return x & (-x); }
	int b[maxn + 1];
	void add(int pos, int val)
	{
		while (pos <= maxn)
		{
			b[pos] += val;
			pos += lowbit(pos);
		}
	}
	int query(int pos)
	{
		int ret = 0;
		while (pos)
		{
			ret += b[pos];
			pos ^= lowbit(pos);
		}
		return ret;
	}
};