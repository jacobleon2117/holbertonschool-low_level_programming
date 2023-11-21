#ifndef HEADER
#define HEADER

/**
 * struct hash_node_s - node of the hash table
 * @key: key, String
 * key is unique in the hashtable
 * @value: value corresponding to a key
 * @next: the pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: size of the array
 * @array: array of size @size
 * every cell of the array is a pointer to the first node of a linked list,
 * therefor we need the hashtable to use a chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int);
unsigned long int hash_djb2(const unsigned char *);
unsigned long int key_index(const unsigned char *, unsigned long int);
int hash_table_set(hash_table_t *, const char *, const char *);
char *hash_table_get(const hash_table_t *, const char *);
void hash_table_print(const hash_table_t *);
void hash_table_delete(hash_table_t *);

#endif
