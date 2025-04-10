/*
 * const和static配合使用
 */

#if 0
int main()
{
	//const和static配合使用时,不管谁在前面都可以
	static const int i = 10;
	const static int j = 10;
	return 0;
}
#endif // 0