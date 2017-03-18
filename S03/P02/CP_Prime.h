#ifndef CP_PRIME_H
#define CP_PRIME_H

#define N 100000000

extern void _print(int n);

extern bool flag_1[N + 2];
extern bool flag_2[N + 2];
extern int prime[N + 2], pnum;

extern void gb_input(int &, int &);

extern void gb_output(bool b[], int, int);

extern void gb_primeList_1(int);

extern void gb_primeList_2(int);

extern void gb_sort(int &, int &);
#endif // !CP_PRIME_H