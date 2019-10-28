#include <iostream>
using namespace std;
int main()
{
	FILE *fp;
	fp=fopen("d:\\myfiles\\file.txt", "a");
	if(!fp)
	{
		cout << "Cannot open file.\n";
		system("pause");
		exit(1);
	}
	fputc('\n', fp);
	
	for(int i=97; 1<123;i++)
		fputc(i,fp);
	fclose(fp);
	return 0;
}
