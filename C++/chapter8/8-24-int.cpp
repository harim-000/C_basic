void Func(int arg)
{
}

void Func(const int arg)	// Error
{
}

int main(void)
{
	int a = 1;
	Func(a);
	return 0;
}
