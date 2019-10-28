#include <iostream>
using namespace std;
int main()
{
	FILE *fp;
	fp=fopen("d:\\myfiles\\file2.txt","w");
	if(!fp)
	{
		cout << "Cannot open file.\n";
		system("pause");
		exit(1);
	}
	fputs("sample string 1\n", fp);
	fputs("sample string 2", fp);
	fclose(fp);
	return 0;
}
