
int func_1 (int val)
{
	return val;
}

int func_2 (int val)
{
	return val;
}


void main (void)
{
	int a = func_1(1);
	int b = a + func_2(2);
	return;
}