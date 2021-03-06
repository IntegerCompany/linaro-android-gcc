#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void mem_init (void);
int ARCHnodes, ARCHnodes1;
int ***vel;

/* The whole matrix VEL is flattened (3 dimensions).  
   The dimensions are NOT transposed.  */
/*--------------------------------------------------------------------------*/

int
main (int argc, char **argv)
{
  int i, j, k;

  ARCHnodes = 2;
  ARCHnodes1 = 4;

/* Dynamic memory allocations and initializations */

  mem_init ();

  for (j = 0; j < 3; j++)
    {
      for (i = 0; i < 2; i++)
	{
	  for (k = 0; k < 3; k++)
	{
	    printf ("[%d][%d][%d]=%d ", i, j, k, vel[i][k][k]);
	}
	  printf ("\n");
	}
      printf ("\n");
    }
  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
      free (vel[i][j]);

  for (i = 0; i < 2; i++)
    free (vel[i]);

  free (vel);
  return 0;
}

/*--------------------------------------------------------------------------*/
/* Dynamic memory allocations and initializations                           */

__attribute__((noinline)) void
mem_init (void)
{

  signed int i, j, k,d;
 
  d = 0;
  vel = (int ***) malloc (ARCHnodes * sizeof (int **));

  for (i = 0; i < ARCHnodes; i++)
    {
      vel[i] = (int **) malloc (3 * sizeof (int *));
      if (vel[i] == (int **) NULL)
	{
	  fprintf (stderr, "malloc failed for vel[%d]\n", i);
	  fflush (stderr);
	  exit (0);
	}
    }
  for (i = 0; i < ARCHnodes; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  vel[i][j] = (int *) malloc (ARCHnodes1 * sizeof (int));
	}
    }
  for (i = 0; i < ARCHnodes; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  for (k = 0; k < ARCHnodes1; k++)
	    {
              printf ("acc to dim2 ");
	      vel[i][j][k] = d;
	      d++;
	    }
	}
    }
  printf ("\n");
}

/*--------------------------------------------------------------------------*/
/* { dg-final-use { scan-ipa-dump-times "Flattened 3 dimensions" 1 "matrix-reorg"  } } */
/* { dg-final-use { scan-ipa-dump-times "Transposed" 0 "matrix-reorg"  } } */
/* { dg-final-use { cleanup-ipa-dump "matrix-reorg" } } */
