//实现strstr(查找子串)
#include<stdio.h>
#include<assert.h>
#include<string.h>
const char *my_strstr(const char *mainStr,const char *findStr)
{
	const char *end = mainStr + strlen(mainStr) - strlen(findStr) + 1;
	const char *newStart = mainStr;
	const char *mStart = NULL;
	const char *fStart = NULL;
	assert(mainStr);
	assert(findStr);
	while(newStart < end)
	{
		mStart = newStart;
		fStart = findStr;
		while(*mStart && *fStart && *mStart == *fStart)
	    {
			mStart++;
		    fStart++;
		}
		if(*fStart != '\0')
		{
			newStart++;
		}
		else
		{
			return newStart;
		}
	}
	return NULL;
}

int main()
{
	const char *mainStr = "12345678abcdefghijk";
	const char *findStr = "78ab";
	const char *subStr = my_strstr(mainStr,findStr);
	printf("%s\n",subStr);
	system("pause");
	return 0;
}