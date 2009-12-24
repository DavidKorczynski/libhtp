
#ifndef _HTP_DECOMPRESSORS_H
#define	_HTP_DECOMPRESSORS_H

#include "zlib.h"

#define GZIP_BUF_SIZE       8192
#define GZIP_WINDOW_SIZE    -15

#define DEFLATE_MAGIC_1 0x1f
#define DEFLATE_MAGIC_2 0x8b

typedef struct htp_decompressor_gzip_t htp_decompressor_gzip_t;

struct htp_decompressor_gzip_t {
    htp_decompressor_t super;
    int initialized;
    int zlib_initialized;
    uint8_t header[10];
    uint8_t header_len;
    z_stream stream;
    unsigned char *buffer;
    unsigned long crc;    
};

#endif	/* _HTP_DECOMPRESSORS_H */
