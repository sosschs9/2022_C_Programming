#include<stdio.h>

int main()
{
	char word[5][15] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			scanf_s("%c", word[i][j]);
		}
	}
  
  
  
  /*
    for(int i=0; i<5; i++)
    {
      scanf_s("%s",word[i],sizeof(word));
    }
  
 */
  

  
  
  
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (word[j][i] == NULL)
				continue;
			else
				printf("%c",word[j][i]);
		}

		
	}
	return 0;
}
