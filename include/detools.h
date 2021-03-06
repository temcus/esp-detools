#ifndef ESP_DETOOLS_DETOOLS_H
#define ESP_DETOOLS_DETOOLS_H

#ifndef CONFIG_DETOOLS_FILE_IO
#define CONFIG_DETOOLS_FILE_IO 0
#endif

#ifndef CONFIG_DETOOLS_COMPRESSION_NONE
#define CONFIG_DETOOLS_COMPRESSION_NONE 0
#endif

#ifndef CONFIG_DETOOLS_COMPRESSION_HEATSHRINK
#define CONFIG_DETOOLS_COMPRESSION_HEATSHRINK 0
#endif

#define DETOOLS_CONFIG_COMPRESSION_LZMA        0
#define DETOOLS_CONFIG_COMPRESSION_CRLE        0
#define DETOOLS_CONFIG_FILE_IO                 CONFIG_DETOOLS_FILE_IO
#define DETOOLS_CONFIG_COMPRESSION_NONE        CONFIG_DETOOLS_COMPRESSION_NONE
#define DETOOLS_CONFIG_COMPRESSION_HEATSHRINK  CONFIG_DETOOLS_COMPRESSION_HEATSHRINK

#include "../src/detools/src/c/detools.h"

#endif

