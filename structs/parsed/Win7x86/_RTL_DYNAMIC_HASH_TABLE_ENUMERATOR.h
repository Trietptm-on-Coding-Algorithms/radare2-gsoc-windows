
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
	struct _RTL_DYNAMIC_HASH_TABLE_ENTRY	HashEntry;
	struct _LIST_ENTRY	*ChainHead;
	uint32_t	BucketIndex;
}__attribute__((packed));
