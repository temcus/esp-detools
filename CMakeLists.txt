set(srcs
	"src/detools/src/c/detools.c"
	"src/detools/src/c/heatshrink/heatshrink_decoder.c"
)

set(include_dirs "include" "src/detools/src/c/heatshrink")
set(priv_include_dirs "src/detools/src/c")

idf_component_register(SRCS "${srcs}"
                       INCLUDE_DIRS "${include_dirs}"
					   PRIV_INCLUDE_DIRS "${priv_include_dirs}"
                       REQUIRES)

target_compile_options(${COMPONENT_LIB} PRIVATE -DDETOOLS_CONFIG_FILE_IO=1)
target_compile_options(${COMPONENT_LIB} PRIVATE -DDETOOLS_CONFIG_COMPRESSION_NONE=0)
target_compile_options(${COMPONENT_LIB} PRIVATE -DDETOOLS_CONFIG_COMPRESSION_LZMA=0)
target_compile_options(${COMPONENT_LIB} PRIVATE -DDETOOLS_CONFIG_COMPRESSION_CRLE=0)
target_compile_options(${COMPONENT_LIB} PRIVATE -DDETOOLS_CONFIG_COMPRESSION_HEATSHRINK=1)

