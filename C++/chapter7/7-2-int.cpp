struct STag
{
	char m;
};

int main(void)
{
	struct STag s1;
	struct STag s2;

	s1 = s2;	// OK
	return 0;
}
