#include <iostream>
using namespace std;
int main()
{
	FILE *fp;
	fp=fopen("d:\\myfiles\\file.txt", "r");
	if(!fp)
	{
		cout << "Cannot open file.\n";
		system("pause");
		exit(1);
	}
	
	char c;
	while((c = fgetc(fp))!=EOF)
		
	fclose(fp);
	system("pause > 0");
	return 0;
}
