#ifndef MYSORT_H_INCLUDED
#define MYSORT_H_INCLUDED


int printArray(int values[], int n)
{

    for (int i = 0; i < n; i++) {

         printf("%d ", values[i]);
    }
    printf("\n");


    return(1);

}


int generateData(int values[], int n)
{

       for (int i = 0; i < n; i++)
       {

        values [i] = rand()%100 + 1;

        }  // end of the generation loop

     return(1);
}

int sortArray (int values[], int n)
{

   // Native (None Optimized Code) Bubble Sorting
    for (int i=0; i < (n-1); i++)
    {

         for (int j=i+1; j < n ; j++ )
        {
            if (values [i] > values [j] )
                {
                    // swapping
                    int temp = values [i];

                    values[i] = values [j];

                    values [j] = temp;
                }

        }

    }

    return(1);

}



#endif // MYSORT_H_INCLUDED
