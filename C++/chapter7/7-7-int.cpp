typedef struct STag
{
	char m;
} SType;

int main(void)
{
	SType a, b;

	a.m = 1;

	b = a;		// OK
	b == a;	 // Error
	b > a;		// Error
	return 0;
}
