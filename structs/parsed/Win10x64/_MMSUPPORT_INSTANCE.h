
struct _MMSUPPORT_INSTANCE {
	uint16_t	NextPageColor;
	uint16_t	LastTrimStamp;
	uint32_t	PageFaultCount;
	uint64_t	TrimmedPageCount;
	struct _MMWSL_INSTANCE	*VmWorkingSetList;
	struct _LIST_ENTRY	WorkingSetExpansionLinks;
	uint64_t	AgeDistribution[7];
	struct _KGATE	*ExitOutswapGate;
	uint64_t	MinimumWorkingSetSize;
	uint64_t	WorkingSetLeafSize;
	uint64_t	WorkingSetLeafPrivateSize;
	uint64_t	WorkingSetSize;
	uint64_t	WorkingSetPrivateSize;
	uint64_t	MaximumWorkingSetSize;
	uint64_t	PeakWorkingSetSize;
	uint32_t	HardFaultCount;
	uint16_t	PartitionId;
	uint16_t	Pad0;
	struct <unnamed-tag>	u1;
	uint64_t	Reserved0;
	struct _MMSUPPORT_FLAGS	Flags;
}__attribute__((packed));