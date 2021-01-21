#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        UTF16
 * Language Count: 2
 * String Count:   11
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[1302] =
{
    0x0B,0x00,0x02,0x00,0x00,0x5C,0x00,0x00,0x01,0x72,0x00,0x00,0x00,0x84,0x00,0x00,
    0x01,0xF4,0x00,0x00,0x00,0x1C,0x01,0x00,0x01,0x90,0x01,0x00,0x00,0xBA,0x01,0x00,
    0x01,0xCE,0x01,0x00,0x00,0xDE,0x01,0x00,0x01,0x38,0x02,0x00,0x00,0x62,0x02,0x00,
    0x01,0x8C,0x02,0x00,0x00,0xA4,0x02,0x00,0x01,0xD6,0x02,0x00,0x00,0xEE,0x02,0x00,
    0x01,0x1C,0x03,0x00,0x00,0x2E,0x03,0x00,0x01,0x8E,0x03,0x00,0x00,0xBE,0x03,0x00,
    0x01,0x5A,0x04,0x00,0x00,0x7E,0x04,0x00,0x01,0xEE,0x04,0x00,0x14,0x00,0x4A,0x00,
    0x50,0x00,0x45,0x00,0x47,0x00,0x20,0x00,0x49,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,
    0x65,0x00,0x10,0x00,0x4A,0x00,0x50,0x00,0x45,0x00,0x47,0x00,0xD3,0x58,0x2E,0x7E,
    0x16,0x57,0xCF,0x50,0x6E,0x00,0x50,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,
    0x20,0x00,0x74,0x00,0x68,0x00,0x69,0x00,0x73,0x00,0x20,0x00,0x62,0x00,0x75,0x00,
    0x74,0x00,0x74,0x00,0x6F,0x00,0x6E,0x00,0x20,0x00,0x74,0x00,0x6F,0x00,0x20,0x00,
    0x64,0x00,0x72,0x00,0x61,0x00,0x77,0x00,0x20,0x00,0x52,0x00,0x4C,0x00,0x45,0x00,
    0x20,0x00,0x63,0x00,0x6F,0x00,0x6D,0x00,0x70,0x00,0x72,0x00,0x65,0x00,0x73,0x00,
    0x73,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x69,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,
    0x65,0x00,0x20,0x00,0x66,0x00,0x72,0x00,0x6F,0x00,0x6D,0x00,0x20,0x00,0x53,0x00,
    0x51,0x00,0x49,0x00,0x26,0x00,0x09,0x63,0x64,0x6B,0x09,0x63,0x15,0x92,0xEF,0x53,
    0xCD,0x91,0x6A,0x7E,0x16,0x59,0xE8,0x90,0x58,0x5B,0x32,0x51,0x84,0x76,0x52,0x00,
    0x4C,0x00,0x45,0x00,0xD3,0x58,0x2E,0x7E,0x16,0x57,0xCF,0x50,0x72,0x00,0x50,0x00,
    0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x20,0x00,0x74,0x00,0x68,0x00,0x69,0x00,
    0x73,0x00,0x20,0x00,0x62,0x00,0x75,0x00,0x74,0x00,0x74,0x00,0x6F,0x00,0x6E,0x00,
    0x20,0x00,0x74,0x00,0x6F,0x00,0x20,0x00,0x64,0x00,0x72,0x00,0x61,0x00,0x77,0x00,
    0x20,0x00,0x75,0x00,0x6E,0x00,0x63,0x00,0x6F,0x00,0x6D,0x00,0x70,0x00,0x72,0x00,
    0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x52,0x00,0x41,0x00,
    0x57,0x00,0x20,0x00,0x69,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x20,0x00,
    0x66,0x00,0x72,0x00,0x6F,0x00,0x6D,0x00,0x20,0x00,0x53,0x00,0x51,0x00,0x49,0x00,
    0x28,0x00,0x09,0x63,0x64,0x6B,0x09,0x63,0x15,0x92,0xEF,0x53,0xCD,0x91,0x6A,0x7E,
    0x16,0x59,0xE8,0x90,0x58,0x5B,0x32,0x51,0x84,0x76,0x2A,0x67,0xD3,0x58,0x2E,0x7E,
    0x52,0x00,0x41,0x00,0x57,0x00,0x16,0x57,0xCF,0x50,0x12,0x00,0x50,0x00,0x4E,0x00,
    0x47,0x00,0x20,0x00,0x49,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x0E,0x00,
    0x50,0x00,0x4E,0x00,0x47,0x00,0xD3,0x58,0x2E,0x7E,0x16,0x57,0xCF,0x50,0x58,0x00,
    0x50,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x20,0x00,0x74,0x00,0x6F,0x00,
    0x20,0x00,0x64,0x00,0x72,0x00,0x61,0x00,0x77,0x00,0x20,0x00,0x4A,0x00,0x50,0x00,
    0x45,0x00,0x47,0x00,0x20,0x00,0x63,0x00,0x6F,0x00,0x6D,0x00,0x70,0x00,0x72,0x00,
    0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x69,0x00,0x6D,0x00,
    0x61,0x00,0x67,0x00,0x65,0x00,0x20,0x00,0x66,0x00,0x72,0x00,0x6F,0x00,0x6D,0x00,
    0x20,0x00,0x53,0x00,0x51,0x00,0x49,0x00,0x28,0x00,0x09,0x63,0x64,0x6B,0x09,0x63,
    0x15,0x92,0xEF,0x53,0xCD,0x91,0x6A,0x7E,0x16,0x59,0xE8,0x90,0x58,0x5B,0x32,0x51,
    0x84,0x76,0x4A,0x00,0x50,0x00,0x45,0x00,0x47,0x00,0xD3,0x58,0x2E,0x7E,0x16,0x57,
    0xCF,0x50,0x28,0x00,0x52,0x00,0x4C,0x00,0x45,0x00,0x20,0x00,0x43,0x00,0x6F,0x00,
    0x6D,0x00,0x70,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,
    0x20,0x00,0x49,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x16,0x00,0x52,0x00,
    0x41,0x00,0x57,0x00,0x2B,0x00,0x52,0x00,0x4C,0x00,0x45,0x00,0xD3,0x58,0x2E,0x7E,
    0x16,0x57,0xCF,0x50,0x30,0x00,0x50,0x00,0x61,0x00,0x6C,0x00,0x65,0x00,0x74,0x00,
    0x74,0x00,0x65,0x00,0x20,0x00,0x43,0x00,0x6F,0x00,0x6D,0x00,0x70,0x00,0x72,0x00,
    0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x49,0x00,0x6D,0x00,
    0x61,0x00,0x67,0x00,0x65,0x00,0x16,0x00,0x50,0x00,0x61,0x00,0x6C,0x00,0x65,0x00,
    0x74,0x00,0x74,0x00,0x65,0x00,0xD3,0x58,0x2E,0x7E,0x16,0x57,0xCF,0x50,0x2C,0x00,
    0x55,0x00,0x6E,0x00,0x63,0x00,0x6F,0x00,0x6D,0x00,0x70,0x00,0x72,0x00,0x65,0x00,
    0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x52,0x00,0x41,0x00,0x57,0x00,
    0x20,0x00,0x49,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x10,0x00,0x2A,0x67,
    0xD3,0x58,0x2E,0x7E,0x52,0x00,0x41,0x00,0x57,0x00,0x16,0x57,0xCF,0x50,0x5E,0x00,
    0x50,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x20,0x00,0x74,0x00,0x6F,0x00,
    0x20,0x00,0x64,0x00,0x72,0x00,0x61,0x00,0x77,0x00,0x20,0x00,0x70,0x00,0x61,0x00,
    0x6C,0x00,0x65,0x00,0x74,0x00,0x74,0x00,0x65,0x00,0x20,0x00,0x63,0x00,0x6F,0x00,
    0x6D,0x00,0x70,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,
    0x20,0x00,0x69,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x20,0x00,0x66,0x00,
    0x72,0x00,0x6F,0x00,0x6D,0x00,0x20,0x00,0x53,0x00,0x51,0x00,0x49,0x00,0x2E,0x00,
    0x09,0x63,0x64,0x6B,0x09,0x63,0x15,0x92,0xEF,0x53,0xCD,0x91,0x6A,0x7E,0x16,0x59,
    0xE8,0x90,0x58,0x5B,0x32,0x51,0x84,0x76,0x50,0x00,0x61,0x00,0x6C,0x00,0x65,0x00,
    0x74,0x00,0x74,0x00,0x65,0x00,0xD3,0x58,0x2E,0x7E,0x16,0x57,0xCF,0x50,0x9A,0x00,
    0x50,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x20,0x00,0x74,0x00,0x68,0x00,
    0x65,0x00,0x20,0x00,0x69,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x20,0x00,
    0x74,0x00,0x6F,0x00,0x20,0x00,0x63,0x00,0x68,0x00,0x61,0x00,0x6E,0x00,0x67,0x00,
    0x65,0x00,0x20,0x00,0x74,0x00,0x68,0x00,0x65,0x00,0x20,0x00,0x6C,0x00,0x61,0x00,
    0x6E,0x00,0x67,0x00,0x75,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x0A,0x00,0x20,0x00,
    0x61,0x00,0x6E,0x00,0x64,0x00,0x20,0x00,0x72,0x00,0x65,0x00,0x74,0x00,0x72,0x00,
    0x69,0x00,0x65,0x00,0x76,0x00,0x65,0x00,0x20,0x00,0x65,0x00,0x78,0x00,0x74,0x00,
    0x65,0x00,0x72,0x00,0x6E,0x00,0x61,0x00,0x6C,0x00,0x6C,0x00,0x79,0x00,0x20,0x00,
    0x73,0x00,0x74,0x00,0x6F,0x00,0x72,0x00,0x65,0x00,0x64,0x00,0x20,0x00,0x67,0x00,
    0x6C,0x00,0x79,0x00,0x70,0x00,0x68,0x00,0x73,0x00,0x22,0x00,0x09,0x63,0x16,0x57,
    0x47,0x72,0xF4,0x66,0x39,0x65,0x9E,0x8A,0x00,0x8A,0x26,0x4E,0xA2,0x6A,0x22,0x7D,
    0x16,0x59,0xE8,0x90,0x58,0x5B,0x32,0x51,0x84,0x76,0x57,0x5B,0x62,0x5F,0x6E,0x00,
    0x50,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x20,0x00,0x74,0x00,0x68,0x00,
    0x69,0x00,0x73,0x00,0x20,0x00,0x62,0x00,0x75,0x00,0x74,0x00,0x74,0x00,0x6F,0x00,
    0x6E,0x00,0x20,0x00,0x74,0x00,0x6F,0x00,0x20,0x00,0x64,0x00,0x72,0x00,0x61,0x00,
    0x77,0x00,0x20,0x00,0x50,0x00,0x4E,0x00,0x47,0x00,0x20,0x00,0x63,0x00,0x6F,0x00,
    0x6D,0x00,0x70,0x00,0x72,0x00,0x65,0x00,0x73,0x00,0x73,0x00,0x65,0x00,0x64,0x00,
    0x20,0x00,0x69,0x00,0x6D,0x00,0x61,0x00,0x67,0x00,0x65,0x00,0x20,0x00,0x66,0x00,
    0x72,0x00,0x6F,0x00,0x6D,0x00,0x20,0x00,0x53,0x00,0x51,0x00,0x49,0x00,0x26,0x00,
    0x09,0x63,0x64,0x6B,0x09,0x63,0x15,0x92,0xEF,0x53,0xCD,0x91,0x6A,0x7E,0x16,0x59,
    0xE8,0x90,0x58,0x5B,0x32,0x51,0x84,0x76,0x50,0x00,0x4E,0x00,0x47,0x00,0xD3,0x58,
    0x2E,0x7E,0x16,0x57,0xCF,0x50,
};

/* font asset pointer list */
leFont* fontList[2] =
{
    (leFont*)&NotoSans_Regular,
    (leFont*)&NotoSansCJKtc_Regular,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        1302, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_UTF16 // encoding standard
};
