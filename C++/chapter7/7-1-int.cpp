int main(void)
{
	struct
	{
		char m;
	} s1;

	struct
	{
		char m;
	} s2;

	s1 = s2;	// Error
	return 0;
}
