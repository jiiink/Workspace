// lentext.cc
#include "length.h"
#include <cstring>

//class LengthFieldBuffer 

// public members

// construct with a maximum of maxFields
LengthFieldBuffer :: LengthFieldBuffer (int maxBytes)
: VariableLengthBuffer (maxBytes)
{
	Init ();
}

// clear fields from buffer
void LengthFieldBuffer :: Clear ()
{
	VariableLengthBuffer::Clear ();
}

// set the value of the next field of the buffer;
// if size = -1 (default) use strlen(str) as length of field
// return number of bytes packed, -1 if error
int LengthFieldBuffer :: Pack (const void* field, int size)
{
	short len; // length of string to be packed
	if (size >= 0) len = size;
	else len = strlen ((char *) field);
	int start = NextByte; // first character to be packed
	NextByte += (len + sizeof(len));
	if (NextByte > MaxBytes) return -1;
	memcpy (&Buffer[start], &len, sizeof(len));
	memcpy (&Buffer[start+sizeof(len)], field, len);
	BufferSize = NextByte;
	return len;
}

// extract the value of the next field of the buffer
// return the number of bytes extracted, -1 if error
int LengthFieldBuffer :: Unpack (void* field, int maxBytes)
{
	short len; // length of packed string
	if (NextByte >= BufferSize) return -1; // no more fields
	int start = NextByte; // first character to be unpacked
	memcpy (&len, &Buffer[start], sizeof(len));
	if (maxBytes != -1 && len > maxBytes) return -1; // field too long
	NextByte += len + sizeof(len);
	if (NextByte > BufferSize) return -1;
	memcpy (field, &Buffer[start+sizeof(len)], len);
	if (maxBytes > len || maxBytes == -1)
		((char *)field) [len] = 0; // zero termination for string 
	return len;
}

void LengthFieldBuffer :: Print (ostream & stream) const
{
	stream << "Buffer has characters "<<MaxBytes<<" and Buffer Size "<<BufferSize<<endl;
}


int LengthFieldBuffer :: Init ()
 // construct with a maximum of maxFields
{
	Initialized = TRUE;
	Clear ();
	return TRUE;
}

