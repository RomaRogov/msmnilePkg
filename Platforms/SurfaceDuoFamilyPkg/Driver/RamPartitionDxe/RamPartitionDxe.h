EFI_STATUS
EFIAPI
MemoryPeim (
  IN EFI_PHYSICAL_ADDRESS  UefiMemoryBase,
  IN UINT64                UefiMemorySize
  );

STATIC
VOID InitMmu(IN ARM_MEMORY_REGION_DESCRIPTOR *MemoryTable);

STATIC
VOID AddHob(PARM_MEMORY_REGION_DESCRIPTOR_EX Desc);
