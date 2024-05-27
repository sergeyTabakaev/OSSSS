
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int semid;
	char pathname[] = "fifo.c";
	char pathname[] = "key.ipc";
	key_t key;
	struct sembuf mybuf;
