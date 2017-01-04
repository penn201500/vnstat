#ifndef DBCACHE_H
#define DBCACHE_H

typedef struct datanode {
	DATA data;
	short filled;
	short sync;
	struct datanode *next;
} datanode;

int cacheadd(const char *iface, int sync);
datanode *cacheremove(const char *iface);
int cacheupdate(void);
void cacheshow(void);
void cachestatus(void);
int cacheget(datanode *dn);
void cacheflush(const char *dirname);
int cachecount(void);
int cacheactivecount(void);

/* global variables */
datanode *dataptr;

#endif
