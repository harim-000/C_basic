int main(void)
{
	int i = 0;
	void* p = &i;

	p + 1;	// Error
	p++;	// Error
	p--;	// Error
	p[0];	// Error
	return 0;
}
