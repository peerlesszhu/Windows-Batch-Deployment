#include <ntddk.h>

VOID DriverUnload(IN PDRIVER_OBJECT pDriverObject)
{
	DbgPrint("Update Test Driver Unloaded.");
}

NTSTATUS DriverEntry(IN PDRIVER_OBJECT pDriverObject,IN PUNICODE_STRING pRegistryPath)
{
	pDriverObject->DriverUnload = DriverUnload;
	DbgPrint("Update Test Driver Loaded.\n");
	return STATUS_SUCCESS;
}