#include <iostream>
using namespace std;
int main()
{
	FILE *fp;
	fp=fopen("e:\\myfiles\\file.txt", "w");
	
	if(!fp)
	{
		cout << "Cannot open file.\n";
		system("pause");
		exit(1);
	}
	
	for(int i=65;1<91; i++)
		fputc(i,fp);
	fclose(fp);
	return 0;
}
