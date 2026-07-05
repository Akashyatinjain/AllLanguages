#include <stdio.h>

void insertion_sort(int a[], int n)
{
   int k, j, temp;
   for (k = 1; k < n; k++)
   {
      temp = a[k];
      j = k - 1;
      while (j >= 0 && temp < a[j])
      {
         a[j + 1] = a[j];
         j--;
      }
      a[j + 1] = temp;
   }
}

void selectionsort(int a[], int n)
{
   int i, j, small, pos, temp;
   for (i = 0; i < n - 1; i++)
   {
      small = a[i];
      pos = i;
      for (j = i + 1; j < n; j++)
      {
         if (a[j] < small)
         {
            small = a[j];
            pos = j;
         }
      }
      temp = a[i];
      a[i] = a[pos];
      a[pos] = temp;
   }
}

int main()
{
   int a[100];
   int n, i;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++)
   {
      printf("Enter value of index %d: ", i);
      scanf("%d", &a[i]);
   }

   printf("\nBefore Insertion Sort:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   insertion_sort(a, n);
   printf("\nAfter Insertion Sort:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   printf("\n\nEnter %d elements again for Selection Sort:\n", n);
   for (i = 0; i < n; i++)
   {
      printf("Enter value of index %d: ", i);
      scanf("%d", &a[i]);
   }

   printf("\nBefore Selection Sort:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   selectionsort(a, n);
   printf("\nAfter Selection Sort:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }

   return 0;
}
