#ifndef ___SortedIntSet
#define ___SortedIntSet

typedef struct {
	int max;	
	int num;	
	int *set;	
} SortedIntSet;

int Initialize(SortedIntSet *s, int max);

int IsMember(const SortedIntSet *s, int n);

int IsFull(const SortedIntSet *s);

void Add(SortedIntSet *s, int n);

void Remove(SortedIntSet *s, int n);

int Capacity(const SortedIntSet *s);

int Size(const SortedIntSet *s);

void Assign(SortedIntSet *s1, const SortedIntSet *s2);

int Equal(const SortedIntSet *s1, const SortedIntSet *s2);

SortedIntSet *Union(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

SortedIntSet *Intersection(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

SortedIntSet *Difference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

SortedIntSet *SymmetricDifference(SortedIntSet *s1, const SortedIntSet *s2, const SortedIntSet *s3);

SortedIntSet *ToUnion(SortedIntSet *s1, const SortedIntSet *s2);

SortedIntSet *ToIntersection(SortedIntSet *s1, const SortedIntSet *s2);

SortedIntSet *ToDifference(SortedIntSet *s1, const SortedIntSet *s2);

int IsSubset(const SortedIntSet *s1, const SortedIntSet *s2);

int IsProperSubset(const SortedIntSet *s1, const SortedIntSet *s2);

void Print(const SortedIntSet *s);

void PrintLn(const SortedIntSet *s);

void Clear(SortedIntSet *s);

void Terminate(SortedIntSet *s);

#endif
