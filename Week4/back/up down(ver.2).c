#include <stdio.h>

#include <stdlib.h>

 

typedef struct

{

    int x;

    int y;

} coord; 

 

int compare(const void* a, const void* b)

{

    coord A = *(coord*)a; 

    coord B = *(coord*)b;

    if (A.x > B.x) 

        return 1;

    else if (A.y == B.y) 

    {

        if (A.x > B.x) 

            return 0;

        else

            return 0; 

    }

    return 0; 

}

 

int main()

{

    int n, i;

    scanf_s("%d", &n);

    i = 0;

    coord arr[10004]; 

   for(i=0; i<n; i++)

    {

        scanf_s("%d %d", &arr[i].x, &arr[i].y);

        

    }

   

 

   printf("\n");

   //퀵 정렬이 뭔지는 아는데 어떻게 쓰는지는 몰라서 구글링했씁니다.

   qsort(arr, n, sizeof(coord), compare); 

   

   

    for (i=0;i < n;i++)

    {

        printf("%d %d\n", arr[i].x, arr[i].y); 

    }

}
