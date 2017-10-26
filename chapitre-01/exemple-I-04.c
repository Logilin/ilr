/****************************************************************************\
** Exemple de la formation "Temps-reel Linux et Xenomai                     **
**                                                                          **
** Christophe Blaess 2017                                                   **
** http://christophe.blaess.fr                                              **
\****************************************************************************/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

   static int Counter = 0;
//   pthread_mutex_t Counter_mtx = PTHREAD_MUTEX_INITIALIZER;

#define NB_THREADS 2
#define ITERATIONS 1000000

void * thread_function(void * arg)
{
	int j;
	for (j = 0; j < ITERATIONS; j ++) {
//		pthread_mutex_lock (& Counter_mtx);
		Counter ++;
//		pthread_mutex_unlock (& Counter_mtx);
	}
	return NULL;
}


int main(void)
{
	int i;
	pthread_t thr[NB_THREADS];

	// Creer tous les threads
	for (i = 0; i < NB_THREADS; i ++) {
		if (pthread_create(& thr[i], NULL, thread_function, NULL) != 0)
			exit(1);
	}

	// Attendre qu'ils soient tous termines
	for (i = 0; i < NB_THREADS; i ++)
		pthread_join(thr[i], NULL);

	// Afficher l'etat du compteur
	fprintf(stdout, "Results :%d\n", Counter);
	return 0;
}

