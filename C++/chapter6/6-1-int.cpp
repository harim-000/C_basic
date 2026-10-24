int main(void)
{
	int arr1[2];		// OK

	int N = 2;
//	int arr2[N];		// ?

	const int CN = 2;
	int arr3[CN];		// OK
	return 0;
}
