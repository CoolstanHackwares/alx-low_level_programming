#include "main.h"

/**
 * print_errors - A program that prints errors for the Elf Header
 * @msg: the error msg to print
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_errors(char *msg)
{
	int len;

	for (len = 0; msg[len]; len++)
		;
	write(STDERR_FILENO, msg, len);
	exit(98);
}
/**
 * print_type - A program that prints the type of Elf File
 *
 * @buffer: the buff containing the type info
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_type(char *buffer)
{
	print_title("Type");
	switch (buffer[6])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", buffer[6]);
			break;
	}
	printf("\n");

}

/**
 * print_ABIversion - A program that prints the ABI version
 * @buffer: the buffer containing the ABI version
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_ABIversion(char *buffer)
{
	print_title("ABI Version");

	printf("%d", buffer[8]);

	printf("\n");
}

/**
 * print_entry - A program that prints the ELF entry point address
 * This program conforms to the betty documentation style
 **/

void print_entry(void)
{
	Elf64_Ehdr h;
	int k = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;


	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		k = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[k])
			k--;
		printf("%x", p[k--]);
		for (; k >= 0; k--)
			printf("%02x", p[k]);
		printf("\n");
	}
	else
	{
		k = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[k])
			k++;
		printf("%x", p[k++]);
		for (; k <= len; k++)
			printf("%02x", p[k]);
		printf("\n");
	}
}

/**
 * print_os - A program that prints the os/abi for the Elf Header
 * @buffer: the buffer containing the os/abi info
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_os(char *buffer)
{
	print_title("OS/ABI");

	switch (buffer[7])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[7]);
	}
	printf("\n");
}

/**
 * print_version- A program that prints the  version info for the Elf Header
 * @buffer: the buffer containing the version info
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_version(char *buffer)
{
	print_title("Version");

	switch (buffer[6])
	{
		case EV_NONE:
			printf("0");
			break;
		case EV_CURRENT:
			printf("1 (current)");
			break;
		default:
			printf("%d <unknown: %%lx>", (int)buffer[6]);
	}

	printf("\n");
}

/**
 * print_data - A program that prints the data handling for the Elf Header
 * @buffer: The buffer containing the  data handling info
 *
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_data(char *buffer)
{
	print_title("Data");

	switch (buffer[5])
	{
		case ELFDATANONE:
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[5]);
	}

	printf("\n");
}

/**
 * print_magic - A program that prints the Magic for the Elf Header
 * @buffer: The buffer containing magic
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_magic(char *buffer)
{
	int k;

	printf("  Magic:   ");
	for (k = 0; k < 16; k++)
		printf("%.2x ", buffer[k]);
	printf("\n");
}

/**
 * print_class - A program that prints the class, in class of the Elf Header
 * @buffer: the buffer containing class or none
 *
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_class(char *buffer)
{
	print_title("Class");

	switch (buffer[4])
	{
		case ELFCLASSNONE:
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[4]);
	}
	printf("\n");
}

/**
 * print_title - A program that prints the title of the Elf Header
 * @title: the title to print
 * Return: nothing
 * This program conforms to the betty documentation style
 **/

void print_title(char *title)
{
	int size = 37;
	int len, k;

	printf("  ");
	printf("%s:", title);
	for (len = 0; title[len]; len++)
		;
	for (k = 0; k < size - 3 - len; k++)
		printf(" ");
}

/**
 * main - The Entry point for the ELF header
 * @argc: the argument count
 * @argv: The argument vector
 * Return: int or exit code
 * This program conforms to the betty documentation style
 **/

int main(int argc, char **argv)
{
	int fd, readVal, k;
	char buffer[16];
	char match[4] = {0x7f, 'E', 'L', 'F'};

	if (argc != 2)
		print_errors("Improper usage\n");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_errors("Could not open the file\n");
	readVal = read(fd, buffer, 16);
	if (readVal == -1)
		print_errors("Could not read from the file\n");
	for (k = 0; k < 4; k++)
	{
		if (buffer[k] != match[k])
		print_errors("Sorry, it's not an ELF file!\n");
	}
	/*printing the Elf header! */
	printf("ELF Header:\n");
	print_magic(buffer);
	print_class(buffer);
	print_data(buffer);
	print_version(buffer);
	print_os(buffer);
	print_ABIversion(buffer);
	print_type(buffer);
	print_entry();
	/* close the Elf Header file*/
	if (close(fd))
		print_errors("Could not close the file");


	return (0);
}
